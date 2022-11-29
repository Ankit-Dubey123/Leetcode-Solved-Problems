class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char>mp1,mp2;
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]==t[i] and mp2[t[i]]==s[i]){
                continue;
            }
            else if(mp1[s[i]]=='\0' and mp2[t[i]]=='\0'){
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};