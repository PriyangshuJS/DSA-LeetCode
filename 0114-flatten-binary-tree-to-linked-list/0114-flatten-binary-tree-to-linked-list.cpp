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
    void flatten(TreeNode* root) {
    if (!root)
        return;

    std::stack<TreeNode*> nodes_stack;
    nodes_stack.push(root);
    TreeNode* prev = nullptr;

    while (!nodes_stack.empty()) {
        TreeNode* curr = nodes_stack.top();
        nodes_stack.pop();

        if (prev)
            prev->right = curr;

        if (curr->right)
            nodes_stack.push(curr->right);

        if (curr->left)
            nodes_stack.push(curr->left);

        // Since we are converting the left child to nullptr, we save the original right child.
        prev = curr;
        curr->left = nullptr;
    }
}
};