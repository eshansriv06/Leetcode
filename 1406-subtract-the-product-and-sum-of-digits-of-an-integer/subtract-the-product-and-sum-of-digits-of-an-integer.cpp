class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem=0,sum=0,product=1;
        for(int i=n;i>0;i=i/10)
        {
            rem=i%10;
            product =product*rem;
            sum=sum+rem;
        }
        int diff=product-sum;
        return diff;
    }
};