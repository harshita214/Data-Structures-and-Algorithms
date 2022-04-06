// problem link : https://leetcode.com/problems/3sum-with-multiplicity/

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long ans=0;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        ans+=m[target-arr[i]];
        ans%=(1000000007);
        for(int j=0;j<i;j++){
            m[arr[i]+arr[j]]++;
        }
    }
    return ans;
    }
};
