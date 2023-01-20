class Solution {
public:
    void dfs(vector<vector<int>>&ans,int index,vector<int>&curr,vector<int>&nums){
        if(curr.size()>1){
            ans.push_back(curr);
        }
        unordered_set<int>hash;
        for(int i=index;i<nums.size();i++){
            if((curr.empty() || nums[i]>=curr.back()) && hash.find(nums[i])==hash.end()){
              curr.push_back(nums[i]);
              dfs(ans,i+1,curr,nums);
              curr.pop_back();
              hash.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        dfs(ans,0,curr,nums);
        return ans;
    }
};