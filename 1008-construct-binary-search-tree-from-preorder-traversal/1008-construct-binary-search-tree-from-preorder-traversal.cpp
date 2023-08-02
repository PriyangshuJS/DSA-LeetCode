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
  TreeNode* bstFromPreorderHelper(const std::vector<int>& preorder, int& idx, int upperBound) {
    if (idx == preorder.size() || preorder[idx] > upperBound) {
        return nullptr;
    }

    int currentValue = preorder[idx];
    idx++;

    TreeNode* root = new TreeNode(currentValue);
    root->left = bstFromPreorderHelper(preorder, idx, currentValue);
    root->right = bstFromPreorderHelper(preorder, idx, upperBound);

    return root;
}

TreeNode* bstFromPreorder(std::vector<int>& preorder) {
    int idx = 0;
    return bstFromPreorderHelper(preorder, idx, INT_MAX);
}
};