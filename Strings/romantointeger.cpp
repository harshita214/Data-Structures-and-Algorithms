// problem link: https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        vector<int> values;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='I')
                values.push_back(1);
            
            if(s[i]=='V')
                values.push_back(5);
            
            if(s[i]=='X')
                values.push_back(10);
            
            if(s[i]=='L')
                values.push_back(50);
            if(s[i]=='C')
                values.push_back(100);
            if(s[i]=='D')
                values.push_back(500);
            if(s[i]=='M')
                values.push_back(1000);
        }
        int sum=0;
        int i=0;
        for( i=0;i<values.size()-1;i++)
        {
            if(values[i+1]<=values[i])
            {
                sum+=values[i];
            }
            else
            {
                sum+=values[i+1]-values[i];
                i++;
            }
        }
        if(i==values.size())
        return sum;
        else
            return sum+values[i];
        
    }
};
