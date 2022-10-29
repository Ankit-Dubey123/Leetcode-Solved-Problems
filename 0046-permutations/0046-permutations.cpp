class Solution {
public:
    void permute(vector<int>&ds,vector<int>&nums,int freq[],vector<vector<int>>&ans){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                permute(ds,nums,freq,ans);
                ds.pop_back();
                freq[i]=0;
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        permute(ds,nums,freq,ans);
        return ans;
    }
};