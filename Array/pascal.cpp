// problem link: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<int>last;
    vector<vector<int>>res;
    void construct(vector<int>&temp , vector<int>samp)
    {
        int size = temp.size();
        for(int i = 1  , j =0 ; i <=size-2 ;i++ , j++)
        {
            temp[i] = samp[j];
        }
    }
    void fun(int s , int n)    
    {
      last = res[res.size()-1];//{1,2,1}
        // for(auto i : last)
        //     cout<<i;
        // cout<<"\n";
        if(last.size() == n )
            return;
        vector<int>temp(last.size() +1 , 1);
        vector<int>samp;
        for(int i =0 ; i < s-1 ; i++)
        {
            samp.push_back(last[i] +last[i+1]);
        }
        
        construct(temp , samp);
        res.push_back(temp);
        
        fun(temp.size() , n);
    }
    vector<vector<int>> generate(int numRows) {
     //recursive
        int n = numRows;
        if(n>=3)
        {
            res.push_back({1});
            res.push_back({1,1});
            res.push_back({1,2,1});
        }
        else
            if(n==2)
            {
                res.push_back({1});
                res.push_back({1,1});
                
            }
            else
                if(n==1)
                    res.push_back({1});
        fun(3, n );
        return res;
    }
};

