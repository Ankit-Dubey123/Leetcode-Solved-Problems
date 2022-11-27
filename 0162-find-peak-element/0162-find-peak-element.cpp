class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         if(nums.size()<=1)return 0;
//         if(nums[0]>nums[1])return 0;
//         if(nums[nums.size()-1]>nums[nums.size()-2])return nums.size()-1;
        
//         for(int i=1;i<nums.size()-1;i++){
//             if(nums[i]>=nums[i-1] and nums[i]>=nums[i+1])return i;
//         }
//         return -1;
        //---------------binary search
        
        int start=0;
        int end=nums.size()-1;
        int siz=nums.size();
        if(siz==1)return 0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==0){
                return nums[0]>=nums[1]?0:1;
            }
            if(mid==nums.size()-1){
                return nums[siz-1]>=nums[siz-2]?siz-1:siz-2;
            }
            
            if(nums[mid]>=nums[mid-1] and nums[mid]>=nums[mid+1]){
                return mid;
            }
            if(nums[mid-1]>nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};