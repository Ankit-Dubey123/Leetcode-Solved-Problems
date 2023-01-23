class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>v(n+1,0);
        for(int i=0;i<trust.size();i++){
            v[trust[i][0]]=trust[i][1];
        }
        int ans=-1;
        int count=0;
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                ans=i;
                count++;
            }
        }
        if(count>1)return -1;
        count=0;
        for(int i=0;i<trust.size();i++){
            if(trust[i][1]==ans){
                count++;
            }
        }
        if(count==n-1)return ans;
        return -1;
    }
};