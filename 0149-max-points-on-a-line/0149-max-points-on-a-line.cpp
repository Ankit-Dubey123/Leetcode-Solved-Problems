class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1;
        int count=0;
        for(int i=0;i<points.size()-1;i++){
            unordered_map<double,int>mp;
            for(int j=i+1;j<points.size();j++){
               if(points[j][0]==points[i][0]){
                   mp[-90]++;
                   continue;
               }
               double x= double(points[j][1]-points[i][1])/double(points[j][0]-points[i][0]);
               mp[x]++;
            }
            int temp=0;
            for(auto x:mp){
               temp=max(temp,x.second+1);
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};