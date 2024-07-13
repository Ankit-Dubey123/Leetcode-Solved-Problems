class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> mp;
        mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
              {'C', 100}, {'D', 500}, {'M', 1000}};
        
        for (int i=0;i<s.size();i++){
            if(i<s.size()-1 && mp[s[i+1]]>mp[s[i]]){
                ans+=mp[s[i+1]] - mp[s[i]];
                i++;
            }
            else{
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};