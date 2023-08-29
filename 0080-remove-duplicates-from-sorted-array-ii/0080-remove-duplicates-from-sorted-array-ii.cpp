class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
       for(auto no :nums){
           if(ind<2||no>nums[ind-2])
               nums[ind++]=no;
       }
        return ind;
    }
};