class Solution {
public:
    vector<vector<int>>ans;
    void solve(int ind,int target,vector<int>&ds,vector<int>&candidates){
        //base case
            if(target==0){
                ans.push_back(ds);
                return;
            }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind and candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            ds.push_back(candidates[i]);
            solve(i,target-candidates[i],ds,candidates);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        solve(0,target,ds,candidates);
        return ans;
    }
};