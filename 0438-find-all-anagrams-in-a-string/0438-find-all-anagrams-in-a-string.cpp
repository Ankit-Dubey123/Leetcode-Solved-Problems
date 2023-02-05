class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>hash(26,0);
        vector<int>phash(26,0);
        int window=p.size();
        int len=s.size();
        int left=0;
        int right=0;
        if(len<window)return ans;
        
        while(right<window){
            hash[s[right]-'a']++;
            phash[p[right]-'a']++;
            right++;
        }
        right--;
        while(right<len){
            if(hash==phash){
                ans.push_back(left);
            }
            right++;
            if(right!=len){
                hash[s[right]-'a']++;
            }
            hash[s[left]-'a']--;
            left++;
        }
        return ans;
    }
};