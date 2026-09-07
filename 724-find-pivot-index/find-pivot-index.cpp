class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=nums.size();
        int sum=0;
      int  leftsum=0;
       int rightsum=0;
    for(int i=0;i<l;i++)
    {
     sum=sum+nums[i];
    }  
    for(int j=0;j<l;j++)
    {
    int rightsum=sum-leftsum;
    leftsum=leftsum+nums[j];
    if(rightsum==leftsum){
      return j;
    }
    }
    return -1;
    }
};