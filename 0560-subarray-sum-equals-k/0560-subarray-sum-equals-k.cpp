class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int currsum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum==k)count++;
            if(mp.find(currsum-k)!=mp.end()){
                count+=mp[currsum-k];
            }
            mp[currsum]++;
        }
        return count;
    }
};