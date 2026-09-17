class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts[0].size();
        int m= accounts.size();
        int max=0;
        int sum=0;
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            sum=sum+accounts[i][j];
        }
        if(sum>max)
        {
            max=sum;
            sum=0;
        }
        else
        sum=0;
       }
     return max;
    }
};