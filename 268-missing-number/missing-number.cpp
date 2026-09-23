class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int k=0;
     for(int j=0;j<=nums.size();j++)
     { 
        int c=0;
        for(int k=0;k<nums.size();k++)
        {
          if(j==nums[k])
          c=c+1;
        }
        if(c==0)
        {
            k=j;
            break;
        }
     }
     return k;
    }
};