class Solution {
public:
    bool detectCapitalUse(string word) {
        int siz=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' and word[i]<='Z'){
                siz++;
            }
        }
        if(siz==0 or siz==word.size())return true;
        if(siz==1 and word[0]>='A' and word[0]<='Z')return true;
        return false;
    }
};