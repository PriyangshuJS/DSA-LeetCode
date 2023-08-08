class Solution {
public:
   int numTrees(int n) {
    if (n <= 1) {
        return 1; // Base case: 0 or 1 node can only form 1 BST
    }

    // Create an array to store the count of unique BSTs for each number of nodes
    int dp[n + 1];
    dp[0] = dp[1] = 1; // 0 and 1 node can only form 1 BST

    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = 1; j <= i; j++) {
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }

    return dp[n];
}


};