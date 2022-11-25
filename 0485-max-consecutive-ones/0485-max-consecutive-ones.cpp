class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        while(j<nums.size()){
            if(nums[j]==1){
                j++;
            }
            else{
                count=max(count,j-i);
                j++;
                i=j;
            }
        }
        count=max(count,j-i);
        return count;
    }
};