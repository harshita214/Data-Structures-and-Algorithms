// problem link: https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ff=0;
        int k=n;
    
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==0)
            {
                if(n<=1)
                    return true;
                else
                    return false;
            }
           
            else if(flowerbed[0]==1)
            {
                if(n==0)
                    return true;
                else
                   return false;  
            }
                 
        
                 
        }
           
        else
        {
            int p=flowerbed[0],m=flowerbed[1];
            if(p==0 && m==0)
            {
                flowerbed[0]=1;
                if(k>0)
                 k--;
            }
            for(int i=1;i<(flowerbed.size()-1);i++)
            {
                if(flowerbed[i]==0 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1)
                {
                    flowerbed[i]=1;
                    k--;
                }
                if(k==0)
                {
                    ff=1;
                    break;
                }
            }
            int l= flowerbed[flowerbed.size()-1], oo = flowerbed[flowerbed.size()-2];
                 if(l==0 && oo==0)
                 {
                     if(k>0)
                     {
                         oo=1;
                         k--;
                     }
                         
                       
                 }
            
        }
        
        if(k==0 || ff==1)
            return true;
        else
            return false;
    }
};
