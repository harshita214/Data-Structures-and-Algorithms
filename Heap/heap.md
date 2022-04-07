## Why heaps?

Heap as a container gives you fast insertion of any element and deletion, reads to either the minimum-most or maximum-most element. Also it does not provide random access to any other element in the heap
Where to use?
Based on this advantage, some major use cases for heaps are BFS, Djikstra, Current median of stream of elements
Initialising

1. max heap -> for popping largest element
	priority_queue<int> pq;     // replace int with any other type or a struct based on need
2. min heap -> for popping minimum element
	priority_queue<int, vector<int>, greater<int>> pq;
3. custom heaps in case of custom ordering
	struct comp {
		bool operator(int a, int b) {
			return a > b;
		}
	}
	priority_queue<int, vector<int>, comp> pq;
4. If you already have an array and want to initialise using it
	priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());
This last operation takes O(n) time where n is size of array a.
  
## Important operations

pq.push(10);           // adds element to heap
int cur = pq.top();    // returns top element, does NOT pop though
pq.pop()               // pops top element, does NOT return the value of top element though
pq.size()              // return size of heap
pq.empty()             // returns true if heap is empty else false
Always make sure that heap is not empty prior to top() and pop() methods
Time - push() and pop() takes O(logn) time, the other three require O(1) time.

