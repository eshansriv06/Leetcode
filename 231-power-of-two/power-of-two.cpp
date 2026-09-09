class Solution {
public:
    bool isPowerOfTwo(int n) {
        double power=0.0;
        if(n<=0)
        return false;
        for(int i=0;i<=n;i++)
        {
       power=pow(2,i)  ;
      if(power==n)
      return true;
      if(power>n)
      break;
        }
        return false;
    }
};