class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int ans=0;
        for(auto m:mp){
            if(m.second==1)return -1;
            int cnt=0;
            while(m.second>=3){
                m.second-=3;
                cnt++;
            }
            if(m.second)cnt++;
            ans+=cnt;
        }
        return ans;
    }
};