class Solution {
public:
    int dp[1005][1005];
    int recur(vector<vector<int>>&grp,int i,int n,int maxAge){
        if(i==n)return 0;
        if(dp[i][maxAge]!=-1){
            return dp[i][maxAge];
        }
        if(grp[i][1]>=maxAge){
            return dp[i][maxAge]=max(grp[i][0]+recur(grp,i+1,n,grp[i][1]),recur(grp,i+1,n,maxAge));
        }
        return dp[i][maxAge]=recur(grp,i+1,n,maxAge);
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>>grp;
        for(int i=0;i<scores.size();i++){
            grp.push_back({scores[i],ages[i]});
        }
        sort(grp.begin(),grp.end());
        memset(dp,-1,sizeof(dp));
        return recur(grp,0,ages.size(),0);
    }
};