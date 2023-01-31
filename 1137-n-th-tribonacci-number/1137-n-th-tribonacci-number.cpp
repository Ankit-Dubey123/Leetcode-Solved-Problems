class Solution {
public:
    int tribonacci(int n) {
        int a[3];
        a[0]=0;
        a[1]=1;
        a[2]=1;
        for(int i=3;i<=n;i++){
            a[i%3]=a[0]+a[1]+a[2];
        }
        return a[n%3];
    }
};