class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if (nums[start] <= nums[end]) {
            return nums[start];
        }
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % nums.size();
            int prev = (nums.size() + mid - 1) % nums.size();
            if (nums[mid] < nums[next] && nums[mid] < nums[prev]) {
                return nums[mid];
            } else if (nums[mid] >= nums[0]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};