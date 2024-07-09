class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && count==0){
                count++;
            }
            else if(s[i]=='(' && count>0){
                count++;
                ans+=s[i];
            }
            else{
                count--;
                if(count>0){
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};