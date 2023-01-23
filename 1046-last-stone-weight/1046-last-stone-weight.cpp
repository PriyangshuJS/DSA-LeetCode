class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int len =stones.size();    
        
        for(int i=0; i<len-1; i++)
        {
            sort(stones.begin(), stones.end());
            
            stones[len-1]=stones[len-1]-stones[len-2];
            stones[len-2]=0;
        } 
        return stones[len-1];
    }
};