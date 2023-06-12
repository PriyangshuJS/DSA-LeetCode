class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0, maxno=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxno= max(count, maxno);
            }
            else
            {
                count=0;
            }
        }
        return maxno;
    }
};