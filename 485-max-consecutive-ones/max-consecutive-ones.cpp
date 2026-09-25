class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                c++;
            }
            else {
                if(c > k) {
                    k = c;
                }
                c = 0;
            }
        }

        if(c > k)
            k = c;

        return k;
    }
};