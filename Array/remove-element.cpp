// problem link: https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int ans = nums.size();
    
    for(int i = 0; i < ans; i++){
        int m = i;
        int c = 0;
        
        while(nums[m] == val){
            if(m < ans -1){
                m++;
                c++;
            }
            else{
                c++;
                break;
            }
        }
        
        for(int j = i; j < ans - 1; j++){
            nums[j] = nums[m];
            if(m < ans - 1){
                m++;
            }
        }
        
        ans -= c ;
    }
    
    return ans;

        
    }
};
