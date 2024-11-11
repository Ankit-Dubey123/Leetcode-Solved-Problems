class Solution {
public:
    void generateAll(int open, int close, int n, string str, vector<string>& res){
        if(open==n and close==n){
            res.push_back(str);
            return;
        }
        if(open<n){
            generateAll(open+1, close, n, str+'(', res);
        }
        if(close<open){
            generateAll(open, close+1, n, str+')', res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateAll(0, 0, n, "", res);
        return res;
    }
};