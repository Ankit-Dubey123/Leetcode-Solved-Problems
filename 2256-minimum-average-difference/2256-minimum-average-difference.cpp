class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       int min_index;
       long long sum1=0;
       long long sum2=0;
       int min_diff=INT_MAX;
       for(int i=0;i<nums.size();i++){
           sum2+=nums[i];
       }
       for(int i=0;i<nums.size();i++){
           sum1+=nums[i];
           sum2-=nums[i];
           int a=sum1/(i+1);
           int b=(i==nums.size()-1)?0:sum2/(nums.size()-i-1);
           
           if(abs(a-b)<min_diff){
               min_index=i;
               min_diff=abs(a-b);
           }
       }
       return min_index;
    }
};