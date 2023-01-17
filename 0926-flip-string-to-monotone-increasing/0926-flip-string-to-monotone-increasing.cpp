class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count_0=0;
        int count_1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count_1++;
            }
            else{
                count_0++;
            }
            count_0=min(count_0,count_1);
        }
        return count_0;
    }
};