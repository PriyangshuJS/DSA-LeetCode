class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Sort in descending order
        sort(citations.begin(), citations.end(), greater<int>());

        int h = 0;
        for(auto x : citations){
            if(x > h){
                h++;
            } else {
                return h;
            }
        }

        return h;
    }
};