1st-------------
linear search or take xor of all the elements

2nd-------------

    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        if(nums.size()==1)return nums[0];
        while(i<=j){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                return nums[i];
            }
            if(nums[j]==nums[j-1]){
                j--;
            }
            else{
                return nums[j];
            }
            i++;
            j--;
        }
        return -1;
    }
                    
3rd------------------
in order to check for left half
1st instance-> even undex
2nd instance-> odd index, i need to check on the left if the 1st instance of that number is there or not

     
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==nums[mid^1]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return nums[l];
    }                  
                    
                    
