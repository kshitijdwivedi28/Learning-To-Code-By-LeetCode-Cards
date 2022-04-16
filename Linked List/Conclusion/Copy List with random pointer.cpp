 Copy List with Random Pointer

Solution
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.

 

Example 1:


Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
Example 2:


Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]
Example 3:



Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]
 

Constraints:

0 <= n <= 1000
-104 <= Node.val <= 104
Node.random is null or is pointing to some node in the linked list.
   Show Hint #1  
   Show Hint #2  
   Show Hint #3  
   Show Hint #4  
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
    Node* next;
7
    Node* random;
8
    
9
    Node(int _val) {
10
        val = _val;
11
        next = NULL;
12
        random = NULL;
13
    }
14
};
15
*/
16
​
17
class Solution {
18
public:
19
    Node* copyRandomList(Node* head) 
20
    {
21
        if (!head)
22
            return NULL;
23
        
24
        unordered_map<Node*, Node*> m;
25
​
26
        Node* t = head;
27
        
28
        while (t) 
29
        {
30
            m[t] = new Node(t->val);
31
            t = t->next;
32
        }
33
        
34
        for(auto value : m)
35
            cout << value.first->val << " " << value.second->val << endl;
36
        cout << endl << endl;
37
        
38
        
39
        t = head;
40
        
41
        while (t) 
42
        {
43
            m[t]->next = m[t->next];
44
            m[t]->random = m[t->random];
45
            t = t->next;
46
        }
47
        
48
        return m[head];
49
    
50
    }
51
};
