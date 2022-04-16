Rotate List

Solution
Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]
 

Constraints:

The number of nodes in the list is in the range [0, 500].
-100 <= Node.val <= 100
0 <= k <= 2 * 109
C++	
1
/**
2
 * Definition for singly-linked list.
3
 * struct ListNode {
4
 *     int val;
5
 *     ListNode *next;
6
 *     ListNode() : val(0), next(nullptr) {}
7
 *     ListNode(int x) : val(x), next(nullptr) {}
8
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9
 * };
10
 */
11
class Solution {
12
public:
13
    ListNode* rotateRight(ListNode* head, int k) {
14
        
15
        if (!head)
16
            return NULL;
17
        
18
//         vector<int> a;
19
        
20
//         ListNode *t = head;
21
        
22
//         while(t)
23
//         {
24
//             a.push_back(t->val);
25
//             t = t->next;
26
//         }
27
        
28
//         int r = k % a.size();
29
        
30
//         ListNode *ans_head = new ListNode(0);
31
//         ListNode *ans = ans_head;
32
        
33
//         for(int i = a.size() - r; i < a.size(); i++)
34
//         {
35
//             ans->next = new ListNode(a[i]);
36
//             ans = ans->next;
37
//         }
38
        
39
//         for(int i = 0; i < a.size() - r; i++)
40
//         {
41
//             ans->next = new ListNode(a[i]);
42
//             ans = ans->next;   
43
//         }
44
        
45
//         return ans_head->next;
46
        
47
        
48
        
49
        
50
        
51
        ListNode *t = head;
52
        
53
        // calculate size and make linked list circular
54
        int len = 1;
55
        
56
        while(t->next != NULL)
57
        {
58
            len++;
59
            t = t->next;
60
        }
61
        
62
        t->next = head;
63
         
64
        // count rotations
65
        int r = k % len;
66
        r = len - r;
67
        
68
    
69
        // traverse and break the chain 
70
        t = head;
71
        
72
        while(r-- > 1)
73
            t = t->next;
74
        
75
        ListNode *ans_head = t->next;
76
        t->next = NULL;
77
        
78
        return ans_head;
79
        
80
    }
81
};
