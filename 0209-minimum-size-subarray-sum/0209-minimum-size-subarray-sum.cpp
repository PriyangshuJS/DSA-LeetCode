class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int start=0, end;
        int window=INT_MAX;
        int windowSum=0;
        
        for(end=0; end<nums.size(); end++)
        {
            windowSum += nums[end];
            while(windowSum >= target)
            {
                window = min(window, end-start+1);
                windowSum -= nums[start];
                start++;
            }
        }
        return window == INT_MAX ? 0 : window;
    }
};