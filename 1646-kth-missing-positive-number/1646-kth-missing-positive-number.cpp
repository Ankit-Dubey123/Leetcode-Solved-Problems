class Solution {
public:
    bool find(vector<int> & arr, int target){
        int left = 0, right=arr.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return false;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int i = 1, j = 1;
        while(k){
            if(find(arr, i) == false){
                k--;
            }
            i++;
        }
        return i-1;
    }
};