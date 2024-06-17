class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum=0;
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(currSum == k){
                count++;
            }
            if(mp.find(currSum-k)!=mp.end()){
                count+=mp[currSum-k];
            }
            mp[currSum]++;
        }
        return count;
    }
};