class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<size(score); i++)
        {
            pq.push({score[i], i});
        }
        int j=0;
        vector<string> ans(size(pq));
        while(!pq.empty())
        {
            ans[pq.top().second]=j==0 ? "Gold Medal": j==1 ? "Silver Medal": j==2 ? "Bronze Medal": to_string(j+1);
            pq.pop();
            j++;
            
        }
        return ans;
    }
};