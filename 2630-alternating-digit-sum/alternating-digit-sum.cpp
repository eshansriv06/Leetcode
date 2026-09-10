class Solution {
public:
    int alternateDigitSum(int n) {
        int k = 0, rem = 0, sum = 0;
        for (int i = n; i > 0; i = i / 10)
        {
            rem = i % 10;

            if (k % 2 == 0)
            {
                sum = sum + rem;
            }
            else
            {
                sum = sum - rem;
            }

            k++;
        }
        if (k % 2 == 0)
            sum = -sum;

        return sum;
    }
};