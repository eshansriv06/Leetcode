class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int leader=nums[0];
       int vote=1;
       for(int i=1;i<n;i++)
       {
        if(vote==0){
        leader=nums[i];
        vote=1;
       }
       else if(nums[i]==leader)
       vote++;
       else
       vote--;
       }
       return leader;
    }
};