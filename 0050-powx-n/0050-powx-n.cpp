class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(n<0) return 1.0/pow(x,-1*(long long)n);
        if(n&1) return x * pow(x*x,(n-1)/2);
        else return pow(x*x,n/2);
    }
};