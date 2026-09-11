class Solution {
public:
    int addDigits(int num) {
       while(num>=10)
       {
        num=sumofdigits(num);
       }
        return num;
    }
    int sumofdigits(int n)
    {
        int rem=0,sum=0;
        for(int i=n;i>0;i=i/10)
        {
            int rem=i%10;
            sum=sum+rem;
        }
        return sum;
    }
};