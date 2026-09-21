class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int count = 0;

        for(int i = l - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && count == 0)
            {
                continue;
            }

            if(s[i] == ' ')
            {
                break;
            }

            count++;
        }

        return count;
    }
};