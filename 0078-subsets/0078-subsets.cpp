class Solution {
public:
    void generateAll(int i, int n, vector<int> vec, vector<int>& nums, vector<vector<int>>& res){
        if(i==n){
            res.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        generateAll(i+1, n, vec, nums, res);
        vec.pop_back();
        generateAll(i+1, n, vec, nums, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> t;
        generateAll(0, nums.size(), t, nums, res);
        return res;
    }
};