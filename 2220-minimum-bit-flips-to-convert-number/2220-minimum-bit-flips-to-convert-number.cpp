class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        for(int i=31;i>=0;i--){
            if(start&(1<<i) xor goal&(1<<i)){
                count++;
            }
        }
        return count;
    }
};