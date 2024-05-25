class Solution {
public:
    bool comparator(char a, char b){
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']') ;
    }
    bool isValid(string s) {
        stack<int>st;
        if(s.size()<=1)return false;
        for(int i=0 ;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(st.size()>0 && comparator(st.top(), s[i])){
                    st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};