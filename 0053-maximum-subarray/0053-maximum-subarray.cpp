class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // Kadanes Algorithm - 
        
        int n=nums.size();
        int max=INT_MIN;
        int subsum=0;
        for(int i=0; i<n; i++)
        {
            subsum+=nums[i];
            if(subsum>max)
            {
                max=subsum;
            }
            if(subsum<0)
                subsum=0;
        }
            return max;
    }
};