/* Question Clarifications
Some people have misinterpreted the question a bit, for example here
Note, the question states that you always have to pick the two largest stones and then find the minimum-most stone. Its however not necessary that if you had the freedom to pick any two stones, that picking the largest would give you smallest stone at the end. It actually wont, consider the following example -

[25, 23, 16, 16, 16]

If you picked the largest two every time you would end up with 14.
However with freedom to pick any stone you can end with 0. By picking following stones at each step -
(25, 16) -> (23, 16) -> (16, 9)  -> (7, 7)
leaves 9 -> leaves 7 -> leaves 7 -> leaves 0
Another clarification, is the question states find the minmum most possible stone after only one stone remains. Since there can be only one pair of largest stones possible at each step and you do not have the element of choice, you can only have one way of smashing the stones and hence only one possibility of last stone remaining, which being the only candidate for being the minimum-most will also be the answer.


Approach
Once we are aware of how to use the priority queue and the above facts the approach is straightforward as the question instructs us what to do. We need the two largest elements at each step for our operation, since heaps give the fastest access to the extremes its our go to here. The pseudo-code is as follows -

	Initialise heap using the array (use 4th option above)
	Keep smashing as long as there is 2 or more stones (use size() method)
		Pick the two largest and remove them from heap (use top() and pop())
		if their difference is positive add new stone to our heap (use push())
	
If their is a stone remaining in heap return it or else return 0 (use empty() and top())
*/

	int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size() > 1) {
            int stone1 = pq.top(); pq.pop();
            int stone2 = pq.top(); pq.pop();
            if(stone1 - stone2) pq.push(stone1-stone2);
        }
        return pq.empty() ? 0 : pq.top();
    }
// Complexity - Time: O(nlogn), Space: O(n)
