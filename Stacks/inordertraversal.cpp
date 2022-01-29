// problem link: https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> result;
    void inorder(TreeNode* root){
        if(root==NULL){return;}
        if(root->left!=NULL){inorder(root->left);}
        result.push_back(root->val);
        if(root->right!=NULL){inorder(root->right);}
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
        
    }
};
