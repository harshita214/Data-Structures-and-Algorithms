// problem link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x)
    {
        string num = to_string(x);
        int size = num.size();
        int j = size-1;
        bool palindrome;
        for (int i=0; i<size; i++)
        {
            if (num[i] == num[j])
            {
                palindrome = true;
                j--;
            }
            else
            {
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};
