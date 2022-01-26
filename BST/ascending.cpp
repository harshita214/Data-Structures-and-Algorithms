// problem link: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        dfs(root1,v);
        dfs(root2,v);
        sort(v.begin(),v.end());
        return v;
        
    }
    void dfs(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
};