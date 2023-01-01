class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int op=operations.size(),i=0, x=0;
        while(i<op)
        {
            if(operations[i]=="++X" || operations[i]=="X++")
            {++x;}
            else
            {--x;}
            i++;
        }
        return x;
    }
    
};