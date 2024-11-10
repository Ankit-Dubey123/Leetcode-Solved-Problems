#define mod 1000000007;
class Solution {
public:
    long long power(int x, int n){
        if(n==0){
            return 1;
        }
        long long ans = power(x, n/2);
        ans*=ans;
        ans %= mod;
        if(n%2){
            ans *= x;
        }
        ans %= mod;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long noOfOdds = n / 2;
        long long noOfEvens = n /2 + n%2;
        return (power(5, noOfEvens) * power(4, noOfOdds)) % mod;
    }
};