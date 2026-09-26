class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k % l;

        vector<int> temp(k);
        for(int i = 0; i < k; i++)
        {
            temp[i] = nums[l - k + i];
        }
        for(int j = l - k - 1; j >= 0; j--)
        {
            nums[j + k] = nums[j];
        }

        for(int a = 0; a < k; a++)
        {
            nums[a] = temp[a];
        }
    }
};