class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mProfit = 0;
        int minEle = INT_MAX;
        for(int i=0;i<prices.size();i++){
            minEle=min(minEle, prices[i]);
            mProfit = max(mProfit, prices[i]-minEle);
        }
        return mProfit;
    }
};