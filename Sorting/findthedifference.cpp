// problem link: https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = {0};
        for(int i=0; i<s.length(); i++)
            count[s[i]-'a']++;
        for(int i=0; i<t.length(); i++)
            count[t[i]-'a']--;
        for(int i=0; i<26; i++)
            if(count[i])
                return (i+97);
        return '#';
    }
};
