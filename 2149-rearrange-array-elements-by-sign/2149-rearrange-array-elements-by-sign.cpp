class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int posInd = 0, negInd = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[posInd]=nums[i];
                posInd+=2;
            }
            if(nums[i]<0){
                ans[negInd]=nums[i];
                negInd+=2;
            }
        }
        return ans;
    }
};