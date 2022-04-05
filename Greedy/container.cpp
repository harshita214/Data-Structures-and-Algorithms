// problem link : https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
int maxArea(vector& height) {
int i=0;
int j=height.size()-1;

    int area=INT_MIN;
    while(i<j)
    {
        int b=(j-i);
        int l=min(height[i],height[j]);
        
        area=max(area,l*b);
        
        if(height[i]<=height[j])
            i++;
        else 
            j--;
        
    }
    return area;        
}
};
