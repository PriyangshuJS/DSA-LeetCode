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
     int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int result = -1;
        kthSmallestHelper(root, k, count, result);
        return result;
    }
    void kthSmallestHelper(TreeNode* node, int k, int& count, int& result) {
        if (node == nullptr) return;

        kthSmallestHelper(node->left, k, count, result);

        count++;
        if (count == k) {
            result = node->val;
            return;
        }

        kthSmallestHelper(node->right, k, count, result);
    }
};