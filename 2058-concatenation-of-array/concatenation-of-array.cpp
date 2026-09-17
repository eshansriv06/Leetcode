class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int l=nums.size();
        int len=2*l;
        int k=0;
        for(int i=0;i<len;i++)
        {
            if(i<l)
            result.push_back(nums[i]);
            else
            {
                result.push_back(nums[k]);
                k++;
            }
        }
        return result;
    }
};