// problem link: https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int res = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (res > 0 && s[i] == ' ') return res;
            if (s[i] != ' ') res++;
        }
        return res;
        }
    
};
