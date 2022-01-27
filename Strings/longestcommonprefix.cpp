// problem link: 

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
    for(int k=1;k<strs.size();k++)
    {
        int i=-1,j=-1;
        int len=min(ans.size(),strs[k].size());
        while(len--)
        {
            if(ans[i+1]==strs[k][j+1])
            {
                i++;
                j++;
            }
            else
                break;
            
        }
        if(i==-1)
            return "";
        else
            ans=ans.substr(0,i+1);
    }
    return ans;

        
    }
};
