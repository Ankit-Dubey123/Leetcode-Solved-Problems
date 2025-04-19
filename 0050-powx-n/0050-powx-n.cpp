class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        if(n<0){
            nn *= -1;
        }
        double ans = 1.0;
        while(nn){
            if(nn%2){
                ans *= x;
                nn -= 1;
            }
            else{
                x *= x;
                nn /=2;
            }
        }
        if(n<0){
            ans = 1/ans;
        }
        return ans;
    }
};