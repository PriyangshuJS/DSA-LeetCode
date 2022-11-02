class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int result=0, i;
        for(i=0; i<nums.size(); i++)
        {
            result=result+nums.at(i);
        }
        int miss=sum-result;
        return miss;
    }
};