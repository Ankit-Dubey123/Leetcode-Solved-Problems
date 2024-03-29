class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int maxEle = *max_element(nums.begin(),nums.end());
        int l=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==maxEle){
                k--;
            }
            while(!k){
                if(nums[l]==maxEle){
                    k++;
                }
                l++;
            }
            ans+=l;
        }
        return ans;
    }
};