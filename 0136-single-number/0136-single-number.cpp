class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> match;
        for(auto x: nums)
		   match[x]++;
        for(auto ans: match)
        {
           if(ans.second==1)
               return ans.first;
        }
        return -1;
    }
};