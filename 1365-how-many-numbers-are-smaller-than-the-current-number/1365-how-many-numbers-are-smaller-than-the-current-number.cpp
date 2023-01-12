class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len=nums.size();
        vector<int> ans(len);
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
            {
                if(nums[i]>nums[j] && i!=j)
                {
                    ans[i]=ans[i]+1;
                }
            }
        }
        return ans;
    }
};