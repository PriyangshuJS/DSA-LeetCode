class Solution {
public:
    int fib(int n) {
        int a=0, b=1, c=0, count=1;
        if(n<=1)
            return n;
        while(count<n)
        {
            c=a+b;
            a=b;
            b=c;
            count++;
        }
        return c;
    }
};