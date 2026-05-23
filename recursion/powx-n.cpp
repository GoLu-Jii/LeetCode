class Solution {
public:
    double calc(double x, long long n) {
        if (n == 0) return 1.0;  
        if (n == 1) return x;

        if (n % 2 == 0) {
            return calc(x * x, n / 2);
        } else {
            return x * calc(x, n - 1);
        }
    }

    double myPow(double x, int n) {
        long long N = n; 
        if (N < 0) {
            return 1.0 / calc(x, -N);  
        }
        return calc(x, N);
    }
};
