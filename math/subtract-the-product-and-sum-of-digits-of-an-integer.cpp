class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while (n!= 0){
            int digit = n%10;
            n /= 10;
            sum += digit;
            prod *= digit;
        }
        int diff = prod - sum;

        return diff;
    }
};