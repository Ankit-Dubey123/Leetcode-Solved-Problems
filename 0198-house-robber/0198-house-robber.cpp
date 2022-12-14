class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>temp(nums.size());
        if(nums.size()==1)return nums[0];
        temp[0]=nums[0];
        // temp[1]=nums[1];
        temp[1]=max(nums[1],nums[0]);
        for(int i=2;i<nums.size();i++){
            temp[i]=max(temp[i-1],nums[i]+temp[i-2]);
        }
        return temp[nums.size()-1];
    }
};