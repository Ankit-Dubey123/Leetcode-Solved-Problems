class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int cnt=0;
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            cnt=0;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    cnt++;
                }
            }
            if((cnt+1)==strs.size()){
                ans+=strs[0][i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};