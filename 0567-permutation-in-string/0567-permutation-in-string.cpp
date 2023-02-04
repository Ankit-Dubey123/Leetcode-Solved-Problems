class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>count1(26,0);
        vector<int>count2(26,0);
        if(s1.size()>s2.size()){
            return false;
        }
        int low=0;
        int high=0;
        while(high<s1.size()){
            count1[s1[high]-'a']++;
            count2[s2[high]-'a']++;
            high++;
        }
        high-=1;
        while(high<s2.size()){
            if(count1==count2){
                return true;
            }
            high++;
            if(high!=s2.size()){
                count2[s2[high]-'a']++;
            }
            count2[s2[low]-'a']--;
            low++;
        }
        return false;
    }
};