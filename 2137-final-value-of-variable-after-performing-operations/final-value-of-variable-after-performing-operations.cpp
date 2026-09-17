class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int l=operations.size();
        int X=0;
        for(int i=0;i<l;i++)
        {
           if(operations[i]=="--X") 
           X=X-1;
           else if(operations[i]=="X--")
           X=X-1;
            else if(operations[i]=="X++")
           X=X+1;
              else
              X=X+1;
        }
        return X;
    }
};