class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int maxProd = 1;
        int l=0, r=0, count=0;
        while(r<nums.size()){
            maxProd*=nums[r];
            if(maxProd>=k){
                while(maxProd>=k){
                    maxProd/=nums[l];
                    l++;
                }
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
};