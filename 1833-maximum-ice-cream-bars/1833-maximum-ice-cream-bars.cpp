class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<costs.size();i++){
            pq.push(costs[i]);
        }
        int count=0;
        while(!pq.empty()){
            if(coins-pq.top()>=0){
                count++;
                coins-=pq.top();
                pq.pop();
            }
            else{
                break;
            }
        }
        return count;
    }
};