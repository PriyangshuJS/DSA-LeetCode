class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i, reach=0;
        
        for(i=0; i<nums.size(); i++)
        {
            if(reach<i)
                return false;
            reach=max(i+nums[i], reach);
        }

        return true;
    }
};