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
   bool isBalanced(TreeNode* root) {
    if (root == nullptr) {
        return true; // An empty tree is considered balanced
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    int heightDiff = std::abs(leftHeight - rightHeight);
    if (heightDiff > 1) {
        return false; // The current node's subtree is not balanced
    }

    // Recursively check if both left and right subtrees are balanced
    return isBalanced(root->left) && isBalanced(root->right);
}

int getHeight(TreeNode* node) {
    if (node == nullptr) {
        return 0;
    }

    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);

    return 1 + std::max(leftHeight, rightHeight);
}
};