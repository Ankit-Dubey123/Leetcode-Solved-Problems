class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' or ch=='A' or ch=='e' or ch=='E' or ch=='i' or ch=='I' 
             or ch=='o' or ch=='O' or ch=='u' or ch=='U';
    }
    bool halvesAreAlike(string s) {
        int mid=s.size()/2;
        int c1=0;
        int c2=0;
        
        for(int i=0;i<s.size();i++){
            if(i<mid){
                if(isVowel(s[i])){
                    c1++;
                }
            }
            else{
                if(isVowel(s[i])){
                    c2++;
                }
            }
        }
        return c1==c2;
    }
};