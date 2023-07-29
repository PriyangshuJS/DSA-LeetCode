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
    TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd, 
                          vector<int>& inorder, int inStart, int inEnd,
                          unordered_map<int, int>& inorderMap) {
    if (preStart > preEnd || inStart > inEnd) {
        return NULL;
    }

    // The first element in the preorder traversal is the root.
    int rootValue = preorder[preStart];
    TreeNode* root = new TreeNode(rootValue);

    // Find the root's position in the inorder traversal.
    int inRoot = inorderMap[rootValue];

    // Calculate the number of nodes in the left subtree.
    int numLeftNodes = inRoot - inStart;

    // Recursively build the left and right subtrees.
    root->left = buildTreeHelper(preorder, preStart + 1, preStart + numLeftNodes,
                                 inorder, inStart, inRoot - 1, inorderMap);

    root->right = buildTreeHelper(preorder, preStart + numLeftNodes + 1, preEnd,
                                  inorder, inRoot + 1, inEnd, inorderMap);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    // Create a hashmap to store the indices of elements in the inorder traversal.
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); ++i) {
        inorderMap[inorder[i]] = i;
    }

    return buildTreeHelper(preorder, 0, preorder.size() - 1,
                           inorder, 0, inorder.size() - 1, inorderMap);
}
};