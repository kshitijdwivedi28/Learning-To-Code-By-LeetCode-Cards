Flatten a Multilevel Doubly Linked List

Solution
You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure as shown in the example below.

Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, doubly linked list. Let curr be a node with a child list. The nodes in the child list should appear after curr and before curr.next in the flattened list.

Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.

 

Example 1:


Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
Output: [1,2,3,7,8,11,12,9,10,4,5,6]
Explanation: The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:

Example 2:


Input: head = [1,2,null,3]
Output: [1,3,2]
Explanation: The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:

Example 3:

Input: head = []
Output: []
Explanation: There could be empty list in the input.
 

Constraints:

The number of Nodes will not exceed 1000.
1 <= Node.val <= 105
 

How the multilevel linked list is represented in test cases:

We use the multilevel linked list from Example 1 above:

 1---2---3---4---5---6--NULL
         |
         7---8---9---10--NULL
             |
             11--12--NULL
The serialization of each level is as follows:

[1,2,3,4,5,6,null]
[7,8,9,10,null]
[11,12,null]
To serialize all levels together, we will add nulls in each level to signify no node connects to the upper node of the previous level. The serialization becomes:

[1,    2,    3, 4, 5, 6, null]
             |
[null, null, 7,    8, 9, 10, null]
                   |
[            null, 11, 12, null]
Merging the serialization of each level and removing trailing nulls we obtain:

[1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
C++	
1
/*
2
// Definition for a Node.
3
class Node {
4
public:
5
    int val;
6
    Node* prev;
7
    Node* next;
8
    Node* child;
9
};
10
*/
11
​
12
class Solution {
13
public:
14
​
15
    Node* flatten(Node* head) {
16
        
17
        if (!head)
18
            return NULL;
19
        
20
        for (Node* h = head; h; h = h->next)
21
        {
22
            if (h->child)
23
            {
24
                Node* next = h->next;
25
                
26
                h->next = h->child;
27
                h->next->prev = h;
28
                h->child = NULL;
29
                
30
                Node* p = h->next;
31
                
32
                while (p->next) 
33
                    p = p->next;
34
                
35
                p->next = next;
36
                
37
                if (next) 
38
                    next->prev = p;
39
            }
40
        }
41
        
42
        return head;
43
 
44
    }
45
};
