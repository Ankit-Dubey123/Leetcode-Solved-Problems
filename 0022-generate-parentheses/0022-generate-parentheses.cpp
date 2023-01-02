class Solution {
public:
    void generate(int open,int closed,int n,string s,vector<string>&ans){
        if(open==n and closed==n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            generate(open+1,closed,n,s+'(',ans); // closed will increment only when (open>closed) 
        }
        if(closed<open){
            generate(open,closed+1,n,s+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(0,0,n,"",ans);
        return ans;
    }
};