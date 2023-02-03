class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int jump=(numRows-1)*2;
        string res="";
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.size();j+=jump){ 
                 res+=s[j];
                if(i>0 and i<numRows-1 and j+jump-2*i<s.size()){
                    res+=s[j+jump-2*i];
                }
            
            }
        }
        return res;
    }
};