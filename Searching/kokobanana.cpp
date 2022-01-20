// problem link: https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
bool checkEating(vector<int> &piles , int h , int k) {
    int time = 0;

    for (auto x : piles) {
        time += x / k;
        if (x % k != 0)
            time++;
    }

    return (time <= h);
}
int minEatingSpeed(vector<int>& piles, int h) {

    int low = 1, high = INT_MIN;
    for (auto x : piles)
        high = max(high, x);

    int ans ;

    //binary search
    while (low <= high) {
        //mid is our current eating speed
        int mid = (low + high) / 2;

        //check if we can eat with this speed withing the given time
        bool canEat = checkEating(piles, h, mid);

        if (canEat) {
            //if we can eat with current speed then store and minimse the ans
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }

    }

    return ans;
}
};
