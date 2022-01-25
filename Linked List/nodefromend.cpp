// problem link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/#

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node * h = head;
       bool check = false;
       while(n-- and h)
       {
           h = h->next;
           if(n != 0 and !h) check = true;
       }
       if(check)
         return -1;
    
       Node * h2 = head;
       while(h)
       {
           h = h->next;
           h2 = h2->next;
       }
       return h2->data;
}

