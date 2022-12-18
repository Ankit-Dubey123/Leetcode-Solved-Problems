class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        int siz=temperatures.size();
        stack<int>st;
        for(int i=siz-1;i>=0;i--){
          while(!st.empty() and temperatures[st.top()]<=temperatures[i]){
              st.pop();
          }
          if(!st.empty()){
              ans[i]=st.top()-i;
          }
          st.push(i);
        }
        return ans;
    }
};