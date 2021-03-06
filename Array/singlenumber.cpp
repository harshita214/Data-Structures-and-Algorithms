// problem link: https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    { 
	    // base condition
        if(nums.size()==1) return nums[0];
		
        int result = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            result = result ^ nums[i];
        }
        
        return result;
    }
};
