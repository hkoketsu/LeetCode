class Solution {
public:
    double myPow(double x, int n) {
        if (!n) return 1;
        long absN = abs((long)n);
        double ans = 1;
        while(absN>0) {
            if (absN&1 == 1) ans *= x;
            absN >>= 1;
            x *= x;
        }
        return n > 0 ? ans : 1/ans;
    }
};