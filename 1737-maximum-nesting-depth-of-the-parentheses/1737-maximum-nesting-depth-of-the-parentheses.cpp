class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0, actualCnt = 0;
        int maxDepth = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                maxDepth = max(maxDepth, cnt);
            }
            else if(s[i]==')'){
                cnt--;
            }
            else{
                continue;
            }
        }
        return maxDepth;
    }
};