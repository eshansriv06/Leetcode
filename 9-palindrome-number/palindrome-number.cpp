class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        // Numbers ending in 0 are not palindromes unless the number is 0 itself.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedHalf = 0;
        while (x > revertedHalf) {
            revertedHalf = revertedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even number of digits: x == revertedHalf
        // For odd number of digits: x == revertedHalf / 10 (drop the middle digit)
        return x == revertedHalf || x == revertedHalf / 10;
    }
};