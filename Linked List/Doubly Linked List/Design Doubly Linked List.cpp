Design Linked List

Solution
Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the MyLinkedList class:

MyLinkedList() Initializes the MyLinkedList object.
int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
void addAtTail(int val) Append a node of value val as the last element of the linked list.
void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.
 

Example 1:

Input
["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3]

Explanation
MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3
 

Constraints:

0 <= index, val <= 1000
Please do not use the built-in LinkedList library.
At most 2000 calls will be made to get, addAtHead, addAtTail, addAtIndex and deleteAtIndex.
C++	
1
class Node
2
{
3
    public:
4
    
5
        int val;
6
        Node *next, *prev;
7
    
8
        Node(int val)
9
        {
10
            this->val = val;
11
            this->next = NULL;
12
            this->prev = NULL;
13
        }
14
};
15
​
16
​
17
class MyLinkedList {
18
public:
19
​
20
    Node* head;
21
    int size;
22
    
23
    // Constructor
24
​
25
    MyLinkedList() {
26
        
27
        head = NULL;
28
        size = 0;
29
    }
30
    
31
    int get(int index) {
32
        
33
        if (index >= size || index < 0)
34
            return -1;
35
        
36
        Node *curr = head;
37
        
38
        for(int i = 0; i < index; i++)
39
            curr = curr->next;
40
        
41
        return curr->val;
42
        
43
    }
44
    
45
    void addAtHead(int val) {
46
        
47
        addAtIndex(0, val);
48
    }
49
    
50
    void addAtTail(int val) {
51
       
52
        addAtIndex(size, val);
53
    }
54
    
55
    void addAtIndex(int index, int val) {
56
        
57
        if (index > size || index < 0)
58
            return;
59
        
60
        Node *curr = head;
61
        Node *new_node = new Node(val);
62
        
63
        if (index == 0)
64
        {
65
            new_node->next = curr;
66
            
67
            if (curr)
68
                curr->prev = new_node;
69
            
70
            head = new_node;
71
        }
72
        else
73
        {
74
            for(int i = 0; i < index-1; i++)
75
                curr = curr->next;
76
​
77
            new_node->next = curr->next;
78
            
79
            if (new_node)
80
                new_node->prev = curr;
81
​
82
            if (curr->next)
83
                curr->next->prev = new_node;
84
                
85
            curr->next = new_node;
86
            
87
        }
88
        
89
        size++;
90
        
91
    }
92
    
93
    void deleteAtIndex(int index) {
94
        
95
        if (index >= size || index < 0)
96
            return;
97
        
98
        if (index == 0)
99
        {
100
            head = head->next;
101
        }
102
        else
103
        {
104
            Node *curr = head;
105
            
106
            for(int i = 0; i < index-1; i++)
107
                curr = curr->next;
108
            
109
            curr->next = curr->next->next;
110
            
111
            if (curr->next)
112
                curr->next->prev = curr;
113
        }
114
        
115
        size--;  
116
    }
117
​
118
};
119
​
120
/**
121
 * Your MyLinkedList object will be instantiated and called as such:
122
 * MyLinkedList* obj = new MyLinkedList();
123
 * int param_1 = obj->get(index);
124
 * obj->addAtHead(val);
125
 * obj->addAtTail(val);
126
 * obj->addAtIndex(index,val);
127
 * obj->deleteAtIndex(index);
128
 */
