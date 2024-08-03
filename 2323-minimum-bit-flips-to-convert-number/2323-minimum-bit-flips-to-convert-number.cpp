class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start or goal){
            count+=(start & 1) xor (goal & 1);
            start>>=1;
            goal>>=1;
        }
        return count;
    }
};