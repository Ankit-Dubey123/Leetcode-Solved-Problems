class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // one option is to XOR all elements
        //-----------------2nd-----------
        // int i=0;
        // int j=nums.size()-1;
        // if(j==0)return nums[0];
        // while(i<=j){
        //     if(nums[i]==nums[i+1]){
        //         i++;
        //     }
        //     else{
        //         return nums[i];
        //     }
        //     if(nums[j]==nums[j-1]){
        //         j--;
        //     }
        //     else{
        //         return nums[j];
        //     }
        //     i++;
        //     j--;
        // }
        // return -1;
        //-------------3rd-------------------
         int l=0;
        int h=nums.size()-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==nums[mid^1]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return nums[l];
    }
};