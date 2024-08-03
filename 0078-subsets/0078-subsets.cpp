class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int size = nums.size();
        for (int i = 0; i < pow(2,size); i++) {
            vector<int> v;
            int j = 0;
            while(j<size){
                if(i & (1<<j)){
                    v.push_back(nums[j]);
                }
                j++;
            }
            ans.push_back(v);
        }
        return ans;
    }
};