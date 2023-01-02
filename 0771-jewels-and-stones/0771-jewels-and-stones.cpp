class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int js=jewels.length(), ss=stones.length();
        int i=0, j=0 , count=0;
        while(i<js)
        {
            j=0;
            while(j<ss)
            {
                if(jewels[i]==stones[j])
                {
                    count++;
                    j++;
                }
                else
                j++;
            }
            i++;
        }
        return count;
    }
};