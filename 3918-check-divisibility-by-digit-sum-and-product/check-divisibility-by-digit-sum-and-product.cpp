class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,rem=0,product=1;
        for(int i=n;i>0;i=i/10)
        {
            rem=i%10;
           product=product*rem;
            sum=sum+rem;
        }
        
        int check=sum+product;
        if(n%check==0){
        return true;
        }
        else {
        return false;
        }
    }
};