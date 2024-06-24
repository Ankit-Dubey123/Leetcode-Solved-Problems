class Solution {
public:
    int func(vector<int>& arr, int mid) {
        int hours = 0;
        for (int i = 0; i < arr.size(); i++) {
            hours += ceil((double)arr[i] / (double)mid);
        }
        return hours;
    }
    int findMax(vector<int>&arr){
        int maxi = INT_MIN;
        for(int i =0 ; i<arr.size();i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = findMax(piles);
        //int ans = -1;
        while (start < end) {
            int mid = (start + end) / 2;
            int totalHour = func(piles, mid);
            if (totalHour <= h) {
                //ans = mid;
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};