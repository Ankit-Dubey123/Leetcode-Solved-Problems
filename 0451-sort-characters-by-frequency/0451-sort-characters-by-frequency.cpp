class Solution {
public:
    static bool comp(pair<char,int> a, pair<char,int> b){
        return (a.second>b.second);
    }
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char, int>>arr;
        for(auto m:mp){
            arr.push_back(m);
        }
        s.clear();
        sort(arr.begin(), arr.end(), comp);
        for(auto x:arr){
            while(x.second--){
            s.push_back(x.first);
            }
        }
        return s;
    }
};