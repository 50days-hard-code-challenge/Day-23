
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            if (x == 0) {
                return 0;
            }
            x = 1/ x;
            if (n == INT_MIN) {
                x *= x;
                n = -(n / 2);
            } else {
                n = -n;
            }
        }
        double res = 1;
        while (n > 0) {
            if (n % 2 == 0) {
                x = x * x;
                n = n / 2;
            } else {
                res = res * x;
                n--;
            }
        }
        return res;
    }
};

