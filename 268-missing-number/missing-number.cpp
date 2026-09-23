class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int size=nums.size();
     int temp=0;
     int sum=(size*(size+1))/2;
     for(int j=0;j<size;j++)
     { 
       temp+=nums[j];
        }
     return sum-temp;
    }
};