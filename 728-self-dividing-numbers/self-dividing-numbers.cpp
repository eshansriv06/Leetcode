class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int rem=0,a=0,c=0;
        vector<int> result;
        for(int i=left;i<=right;i++)
        {
            for(int j=i;j>0;j=j/10)
            {
                rem=j%10;
                if(rem==0){
                c=0;
                break;
                }
               else if(i%rem==0)
                c=1;
            else if(i%rem!=0)
            {
                c=0;
                break;
            }
            }
            if(c==1){
            result.push_back(i);
            a++;
            c=0;
            }
        }
        return result;
    }
};