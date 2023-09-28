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
    
    void inorder(TreeNode* root, vector<int>& inorderCorrect)
    {
        if(root==NULL)
            return;
        inorder(root->left, inorderCorrect);
        inorderCorrect.push_back(root->val);
        inorder(root->right, inorderCorrect);
    }
    void inorderRepair(TreeNode* root, vector<int>& inorderCorrect, int& i)
    {
        if(root!=NULL)
        {   
            inorderRepair(root->left, inorderCorrect, i);
            if(root->val != inorderCorrect[i])
                root->val = inorderCorrect[i];
            i++;
            inorderRepair(root->right, inorderCorrect, i);
        }
        return;
    }
    void recoverTree(TreeNode* root) {
        
        vector<int> inorderCorrect;
        inorder(root, inorderCorrect);
        sort(inorderCorrect.begin(), inorderCorrect.end());
        int i = 0; 
        inorderRepair(root, inorderCorrect, i);    
    }
};
