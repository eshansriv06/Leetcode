class Solution {
public:
    int arrangeCoins(int n) {
        int low=1,high=n;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            long long int a=mid*(mid+1)/2;
            if(a>n)
            high=mid-1;
            else
            low=mid+1;
        }
        return high;
    }
};