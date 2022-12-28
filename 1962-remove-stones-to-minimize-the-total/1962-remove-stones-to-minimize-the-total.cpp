class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq(piles.begin(),piles.end());
       int res=0;
       for(int i=0;i<piles.size();i++){
           res+=piles[i];
       }
       while(k--){
           int a=pq.top();
           pq.pop();
           res-=a/2;
           pq.push(a-a/2);
       }
        return res;
    }
};