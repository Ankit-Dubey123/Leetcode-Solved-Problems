class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int i=0;
        // int j=0;
        // int count=0;
        // while(j<nums.size()){
        //     if(nums[j]==1){
        //         j++;
        //     }
        //     else{
        //         count=max(count,j-i);
        //         j++;
        //         i=j;
        //     }
        // }
        // count=max(count,j-i);
        // return count;
        //---------------Second Method
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};