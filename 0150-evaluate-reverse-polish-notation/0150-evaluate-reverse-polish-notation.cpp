class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        long long a,b;
        for(auto t:tokens){
            if(t=="+" or t=="-" or t=="*" or t=="/"){
                b=st.top();
                st.pop();
                a=st.top();
                st.pop();
                if(t=="+"){
                    st.push(a+b);
                }
                else if(t=="-"){
                    st.push(a-b);
                }
                else if(t=="*"){
                    st.push(a*b);
                }
                else{
                    st.push(a/b);
                }
            }
            else{
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};