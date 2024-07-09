class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                int j = i;
                int k = 0;
                while (j < s.size() && s[j] != ' ') {
                    j++;
                    k++;
                }
                ans = " " + s.substr(i,k) + ans;
                i=j;
            }
        }
        return ans.substr(1);
    }
};