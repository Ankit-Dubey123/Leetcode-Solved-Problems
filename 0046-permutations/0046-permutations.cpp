class Solution {
public:
//     void permute(vector<int>&ds,vector<int>&nums,int freq[],vector<vector<int>>&ans){
//         if(ds.size()==nums.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(!freq[i]){
//                 ds.push_back(nums[i]);
//                 freq[i]=1;
//                 permute(ds,nums,freq,ans);
//                 ds.pop_back();
//                 freq[i]=0;
                
//             }
//         }
// }
    
    
    void permute(int ind,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            permute(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permute(0,nums,ans);
        return ans;
    }
};