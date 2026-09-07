class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
         int sum=0;
        for(int i=0;i<l;i++)
        {
          sum=sum+nums[i] ; 
         nums[i]=sum;
        }
        return nums;
    }

};