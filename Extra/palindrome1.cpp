// problem link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int ans = x;
    long long  mod = 10000000007;
     int val = 0;
    
    if(x < 0) return false;
    while(x != 0) {
           int digit = x%10;
            x = x/10;
            val = (val%mod * 10)%mod + (digit%mod);
        
    }
    
    
    return (ans == val);
        
    }
};
