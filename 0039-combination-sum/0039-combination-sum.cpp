class Solution {
public:
    vector<vector<int>>ans;
    void solve(int ind,int target,vector<int>&ds,vector<int>&candidates){
        //base case
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
                return;
            }
            return;
        }
        ds.push_back(candidates[ind]);
        if(candidates[ind]<=target){
           solve(ind,target-candidates[ind],ds,candidates); 
        }
        ds.pop_back();
        solve(ind+1,target,ds,candidates);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        solve(0,target,ds,candidates);
        return ans;
    }
};