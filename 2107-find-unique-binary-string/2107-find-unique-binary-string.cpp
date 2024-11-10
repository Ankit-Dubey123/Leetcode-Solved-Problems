class Solution {
public:
    string res = "";
    bool getString(string str, int k, map<string, int> mp){
        if(k>=str.size()){
            return false;
        }
        for(int i = k;i<str.size();i++){
            string temp = str;
            temp[k] = '1';
            if(mp.find(temp) ==mp.end()){
                res = temp;
                return true;
            }
            else{
                mp[temp] = 1;
                if(getString(temp, k+1, mp)){
                    return true;
                }
            }
        }
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<string, int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]] = 1;
        }
        string str = "";
        for(int i =0;i<nums[0].size();i++){
            str+='0';
        }
        if(mp.find(str) == mp.end()){
            return str;
        }
        if(getString(str, 0, mp)){
            return res;
        }
        return "";
    }
};