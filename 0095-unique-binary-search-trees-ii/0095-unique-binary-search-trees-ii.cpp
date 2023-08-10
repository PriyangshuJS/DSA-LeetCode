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
    vector<TreeNode*> generateTrees(int n) {
    if (n == 0) {
        return vector<TreeNode*>();
    }
    return generateTreesHelper(1, n);
}

vector<TreeNode*> generateTreesHelper(int start, int end) {
    vector<TreeNode*> trees;

    if (start > end) {
        trees.push_back(NULL);
        return trees;
    }

    for (int root_val = start; root_val <= end; ++root_val) {
        vector<TreeNode*> left_subtrees = generateTreesHelper(start, root_val - 1);
        vector<TreeNode*> right_subtrees = generateTreesHelper(root_val + 1, end);

        for (TreeNode* left_subtree : left_subtrees) {
            for (TreeNode* right_subtree : right_subtrees) {
                TreeNode* root = new TreeNode(root_val);
                root->left = left_subtree;
                root->right = right_subtree;
                trees.push_back(root);
            }
        }
    }

    return trees;
}
};