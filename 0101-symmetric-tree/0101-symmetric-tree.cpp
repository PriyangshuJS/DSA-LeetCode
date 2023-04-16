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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) 
            return true;
        return symmetry(root->left, root->right);
    }
    bool symmetry(TreeNode* leftC, TreeNode* rightC)
    {
        if(leftC==NULL && rightC==NULL)
            return true;
        if(leftC==NULL || rightC==NULL)
            return false;
        if(leftC->val != rightC->val)
            return false;
        return symmetry(leftC->left, rightC->right) 
            && symmetry(leftC->right, rightC->left);
    }
};