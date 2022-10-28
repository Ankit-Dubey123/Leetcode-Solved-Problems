class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int count=0;
        while(i<s.size() and j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
        }
        if(count==s.size()){
            return true;
        }
        return false;
    }
};