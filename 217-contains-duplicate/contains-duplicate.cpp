class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
       for(int i=0;i<l-1;i++)
       {
        c=nums[i]^nums[i+1];
        if(c==0)
        return true;
       }
        return false;
    }
};