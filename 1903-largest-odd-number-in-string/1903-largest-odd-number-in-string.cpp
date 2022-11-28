class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int e=-1;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                e=i;
                break;
            }
        }
        for(int i=0;i<=e;i++){
            ans+=num[i];
        }
        return ans;
    }
};