class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), life=0;
        int can=nums[0];
        for(int i=0; i<n; i++)
        {
            if(nums[i]==can)
                life++;
            else if(life==0)
            {
                can=nums[i];
                life=0;
            }
            else
                life--;
                
        }
        return can;
    }
};