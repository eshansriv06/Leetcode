class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int k=n;
        for(int i=0;i<n;i++)
        {
          result.push_back(nums[i]);
          result.push_back(nums[k]);
          k++;
        }
        return result;
    }
};