class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' and count==0)count++;
            else if(s[i]=='(' and count>0){
                count++;
                ans+=s[i];
            }
            else if(s[i]==')'){
                count--;
                if(count>0){
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};