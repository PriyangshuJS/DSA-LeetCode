class Solution {
public:
    int minPartitions(string n) {
        int len=n.length();
        int max=0;
        for(int i=0; i<len; i++)
        {
            if(max<(n[i]-'0'))
                max=n[i]-'0';
        }
        return max;
    }
};