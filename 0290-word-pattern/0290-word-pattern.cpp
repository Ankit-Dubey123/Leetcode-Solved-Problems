class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int>m1;
        unordered_map<string,int>m2;
        stringstream ss(s);
        string word;
        int i=0;
        int n=pattern.size();
        while(ss>>word){
            if(i==n or m1[pattern[i]]!=m2[word]){
                return false;
            }
            m1[pattern[i]]=i+1;
            m2[word]=i+1;
            i++;
        }
        return i==n;
    }
};