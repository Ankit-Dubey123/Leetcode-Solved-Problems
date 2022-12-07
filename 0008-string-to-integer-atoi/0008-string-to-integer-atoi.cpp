class Solution {
public:
    int myAtoi(string s) {
        int result=0;
        int sign=1;
        int i=0;
        while(s[i]==' ')i++;
        if(s[i]=='-' or s[i]=='+'){
            sign=1-2*(s[i++]=='-');
        }
        while(s[i]>='0' and s[i]<='9'){
            if(result>INT_MAX/10 or (result==INT_MAX/10 and s[i]-'0'>7)){
                if(sign==1)return INT_MAX;
                else return INT_MIN;
            }
            result=result*10+(s[i++]-'0');
            
        }
        return result*sign;
    }
};