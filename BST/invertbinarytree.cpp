// PROBLEM LINK : https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return NULL;
        TreeNode* l=invertTree(root->left);
        TreeNode* r=invertTree(root->right);
        root->left=r;
        root->right=l;
        return root;
    }
};

