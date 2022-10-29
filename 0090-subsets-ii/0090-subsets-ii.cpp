class Solution {
public:
    void findsubsets(int ind,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i>ind and nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            findsubsets(i+1,ds,nums,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        findsubsets(0,ds,nums,ans);
        return ans;
    }
};