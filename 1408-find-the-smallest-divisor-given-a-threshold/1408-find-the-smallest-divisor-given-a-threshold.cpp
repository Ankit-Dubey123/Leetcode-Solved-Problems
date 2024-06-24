class Solution {
public:

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int start = 1, end = maxi;
        while(start<=end){
            int mid = (start+end)/2;
            int sum=0;
            for(int i = 0;i<nums.size();i++){
                sum+=ceil((double)nums[i] / (double)mid);
            }
            if(sum<=threshold){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};