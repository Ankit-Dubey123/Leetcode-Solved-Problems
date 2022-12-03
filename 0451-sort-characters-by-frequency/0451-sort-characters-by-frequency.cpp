class Solution {
public:
    static bool comp(pair<char,int>a, pair<char,int>b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto ch: s){
            mp[ch]++;
        }
        vector<pair<char,int>>arr;
        for(auto m:mp){
            arr.push_back(m);
        }
        sort(arr.begin(),arr.end(),comp);
        s.clear();
        for(auto x:arr){
            while(x.second--){
                s.push_back(x.first);
            }
        }
        return s;
    }
};