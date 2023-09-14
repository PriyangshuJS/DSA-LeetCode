class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        if (n < 3) 
            return result; // Not enough elements to form triplets
        
        sort(nums.begin(), nums.end()); // Sort the array
    
        for (int i = 0; i < n - 2; ++i) 
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue; // Skip duplicate values to avoid duplicate triplets
            
            int target = -nums[i];
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) 
            {
                int sum = nums[left] + nums[right];
                
                if (sum == target) 
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicate values
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                } 
                else if (sum < target) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
        }
        
        return result;
    }
};
