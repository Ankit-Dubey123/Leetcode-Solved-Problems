class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans= ans xor nums[i] xor (i+1);
        }
        return ans;
    }
};