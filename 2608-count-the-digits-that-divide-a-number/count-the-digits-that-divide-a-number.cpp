class Solution {
public:
    int countDigits(int num) {
        int rem=0,c=0;
        for(int i=num;i>0;i=i/10)
        {
            rem=i%10;
            if(num%rem==0)
            c++;
        }
        return  c;
    }
};