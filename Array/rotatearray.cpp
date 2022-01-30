// problem link: https://leetcode.com/problems/rotate-array/

//First approch
//Time Complexity : O(n^2)
//Space Complexity : O(1)
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         for(int i=0; i < k; i++) {
             int temp = nums[nums.size()-1];
             for(int j=nums.size()-1; j > 0; j--) {
                 nums[j] = nums[j-1];
             }
             nums[0] = temp;
        }
    }
};
*/
