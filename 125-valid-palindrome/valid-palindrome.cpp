class Solution {
public:
    bool isPalindrome(string s) {
        string sc = "";

        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                char ch = tolower(s[i]);
                sc.push_back(ch);
            }
        }

        int i = 0;
        int j = sc.length() - 1;

        while(i < j) {
            if(sc[i] != sc[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};