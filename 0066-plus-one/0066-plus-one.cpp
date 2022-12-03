class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        reverse(digits.begin(),digits.end());
        for(int i=0;i<digits.size();i++){
            if(carry){
                carry=(digits[i]+1)/10;
                digits[i]=(digits[i]+1)%10;
            }
        }
        if(carry){
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};