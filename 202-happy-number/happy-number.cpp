class Solution {
public:
    bool isHappy(int n) {
        while (n != 1) {
            n = sumofdigits(n);

            if (n == 4)
                return false;
        }

        return true;
    }

    int sumofdigits(int n) {
        int sum = 0;

        for (int i = n; i > 0; i = i / 10) {
            int d = i % 10;
            sum = sum + d * d;
        }

        return sum;
    }
};