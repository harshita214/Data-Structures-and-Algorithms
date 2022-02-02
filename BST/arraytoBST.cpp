// problem link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
    TreeNode* bst(vector<int>& nums, int lo, int hi)
    {
        int n=hi-lo;
        if(n==0)
            return NULL;
        int m=lo+(hi-lo)/2; 
        TreeNode* mid= new TreeNode(nums[m]);
        mid->left=bst(nums,lo,m);
        mid->right=bst(nums,m+1,hi);
        return mid;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return bst(nums,0,n);
    }
};
