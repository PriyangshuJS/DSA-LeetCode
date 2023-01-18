class Solution {
public:
    int tribonacci(int n) {
        vector<int> a(38, 0);
        a[0]=0;
        a[1]=1;
        a[2]=1;
        for(int i=3; i<38; i++)
        {
            a[i]=a[i-3]+a[i-2]+a[i-1];
        }
        return a[n];
    }
};