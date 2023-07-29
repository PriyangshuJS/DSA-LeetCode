/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSumHelper(TreeNode* root, int& maxSum) {
    if (root == nullptr) {
        return 0;
    }

    // Recursively find the maximum path sum for the left and right subtrees.
    int leftSum = max(0, maxPathSumHelper(root->left, maxSum));
    int rightSum = max(0, maxPathSumHelper(root->right, maxSum));

    // Update the maximum path sum if the current path sum is greater.
    maxSum = max(maxSum, root->val + leftSum + rightSum);

    // Return the maximum sum including the current node.
    return root->val + max(leftSum, rightSum);
}

int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible value.
    maxPathSumHelper(root, maxSum);
    return maxSum;
}
};