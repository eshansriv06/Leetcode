class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int l=nums.size();
        int c=0;
        for(int i=0;i<l;i++)
        {
        for(int j=0;j<l;j++)
        {
                if(nums[j]<nums[i])
                   c++;
            }
            result.push_back(c);
            c=0;
        }
        return result;
    }
};