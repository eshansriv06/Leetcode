class Solution {
public:
    int reverse(int x) {
        long long sum = 0;

        while (x != 0) {
            int d = x % 10;
            sum = sum * 10 + d;
            x = x / 10;
        }

        if (sum > 2147483647 || sum < -2147483648LL)
            return 0;

        return (int)sum;
    }
};