// problem link: https://leetcode.com/problems/binary-tree-postorder-traversal/

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
vector<int> postorderTraversal(TreeNode* root) {
        
stack<pair<TreeNode*,int>>s;
vector<int>pre,ino,post;
if(root==NULL)return pre;
s.push({root,1});

while(!s.empty()){

	auto node=s.top();
    s.pop();
    
	if(node.second==1){
		pre.push_back(node.first->val);
		node.second++;
        s.push(node);
		if(node.first->left!=NULL)
			s.push({node.first->left,1});
	}

	else if(node.second==2){
		ino.push_back(node.first->val);
		node.second++;
        s.push(node);
		if(node.first->right!=NULL)
			s.push({node.first->right,1});
	}

	else{
		post.push_back(node.first->val);
	}

    
    }
        
    return post;
}
};
