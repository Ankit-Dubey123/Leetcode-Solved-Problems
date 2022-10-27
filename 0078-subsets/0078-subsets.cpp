class Solution {
public:
    vector<vector<int>>ans;
    void subset(int ind,vector<int>nums,vector<int>&v){
        if(ind>=nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        subset(ind+1,nums,v);
        v.pop_back();
        subset(ind+1,nums,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        subset(0,nums,v);
        return ans;
    }
};