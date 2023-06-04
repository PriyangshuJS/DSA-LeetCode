class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     
        // Brute Force Approach - ans[j][(n-1)-i]=matrix[i][j];
        
        int n=matrix.size();
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++)
        {
           reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};