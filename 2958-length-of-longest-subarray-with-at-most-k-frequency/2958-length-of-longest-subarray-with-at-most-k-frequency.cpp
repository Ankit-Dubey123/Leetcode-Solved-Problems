class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxLen = 0; 
        int l = 0, r = 0;
        unordered_map<int,int> hashmap;
        while (r < nums.size()){
            hashmap[nums[r]]++;
            if(hashmap[nums[r]] > k){
                while(nums[l]!=nums[r]){
                  hashmap[nums[l]]--;
                  l++;
                }
                hashmap[nums[l]]--;
                l++;
            }
            maxLen = max (maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};