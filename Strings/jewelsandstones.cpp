// problem link: https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
unordered_map<char,int> map;
int count=0;
for(int i=0;i<jewels.length();i++) map[jewels[i]]++;
for(int i=0;i<stones.length();i++) if(map.count(stones[i])) count++;
return count;
}
};
