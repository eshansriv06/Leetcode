class Solution {
public:
    double average(vector<int>& salary) {
        int max=0;int min=salary[0];
        int l=salary.size();
        int sum=0;
        double avg=0.0;
        for(int i=0;i<l;i++)
    {
        if(salary[i]>max)
        {
           max=salary[i];
        }
        if(salary[i]<min){
         min=salary[i];
        }
        sum=sum+salary[i];
    }
    avg=(double)(sum-max-min)/(l-2);
    return avg;
    }
};