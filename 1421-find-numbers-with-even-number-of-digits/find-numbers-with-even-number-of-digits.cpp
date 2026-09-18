class Solution {
public:
int numberofdigits(int n)
{
    int c=0;
    while(n>0)
    {
      c++;
      n=n/10;
    }
    return c;
}
    int findNumbers(vector<int>& nums) {
        int l=nums.size();
        int k=0;
        for(int i=0;i<l;i++)
    {
        int v=numberofdigits(nums[i]);
        if(v%2==0)
        k++;
    }
    return k;
    }
};