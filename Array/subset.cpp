// problem link: https://leetcode.com/problems/subsets/

class Solution {
public:
    int n,k;
vector<vector<int>> res;
vector<vector<int>> subsets(vector<int>& nums) {
    n=nums.size();
    vector<int> x;
    for(k=0; k<n+1; k++) {
        poset(0, x, nums);
    }
 return res;
}

void poset(int j, vector<int> curr, vector<int> nums) {
    if(curr.size()==k) {
        res.push_back(curr);
        return;
    }
    for(int i=j; i<n; i++) {
        curr.push_back(nums[i]);
        poset(i+1, curr, nums);
        curr.pop_back();
    }     
}

};
