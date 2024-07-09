class Solution {
public:
    string largestOddNumber(string num) {
        int j = -1;
        for(int i=num.size();i>=0;i--){
            int digit = num[i] - '0';
            if(digit % 2 != 0){
                j=i;
                break;
            }
        }
        return j==-1 ? "" : num.substr(0,j+1);
    }
};