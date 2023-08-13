class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++)
        {
            // This if is to check the windows is always k and the deque is not empty
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
            
            // This while is to pop out the smaller no in front. The deque has to be in                     decreasing order
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            
            // To take the front element in dq as ans
            if(i>=k-1)
                ans.push_back(nums[dq.front()]);
        }
        
        return ans;
        
    }
};