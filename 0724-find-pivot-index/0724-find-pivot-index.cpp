class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len=nums.size(), index=0, suml=0, sumr;
        sumr = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<len; i++)
        {
            sumr=sumr-nums[i];
            if(sumr==suml)
                return i;
            suml=suml+nums[i];
        }
        return -1;
        
        
        
        
        /*int len=nums.size(), index=0, sumi=0, sumj=0;
        for(int i=0; i<len; i++)
        {
            sumi=sumi+nums[i];
            for(int j=i+2; j<len; j++)
            {
                sumj=sumj+nums[j];
                if(sumj==sumi )
                  {  index=i;}
            }
            if(sumi!=sumj)
            {sumi=0; sumj=0;}
            
        }
        return index;*/
    }
};