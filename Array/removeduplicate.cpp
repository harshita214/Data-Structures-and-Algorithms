// problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j= 1;
        while(j < n){
           if(nums[i] != nums[j]){
             nums[++i]= nums[j]; 
           } 
           j++; 
        }
        return n ? ++i : 0;
    }
};
