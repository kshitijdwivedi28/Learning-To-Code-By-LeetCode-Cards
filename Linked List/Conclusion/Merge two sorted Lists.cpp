 Merge Two Sorted Lists

Solution
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
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
// class Solution {
12
// public:
13
//     ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
14
        
15
//         if (!h1)
16
//             return h2;
17
//         if (!h2)
18
//             return h1;
19
​
20
//         if (h1->val < h2->val) 
21
//         {
22
//             h1->next = mergeTwoLists(h1->next, h2);
23
//             return h1;
24
//         }
25
//         else 
26
//         {
27
//             h2->next = mergeTwoLists(h1, h2->next);
28
//             return h2;
29
//         }
30
//     }
31
        
32
// };
33
    
34
    class Solution {
35
public:
36
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
37
​
38
        if(!list1 && !list2){
39
            return NULL;
40
        }
41
        
42
        if(!list1){
43
            return list2;
44
        }
45
        
46
        if(!list2){
47
            return list1;
48
        }
49
        
50
        ListNode *list3 = new ListNode(0);
51
        ListNode *last = list3;
52
        
53
        while(list1 != NULL && list2 != NULL)
54
        {
55
            if(list1->val <= list2->val)
56
            {
57
                last->next = new ListNode(list1->val);
58
                last = last->next;
59
                list1 = list1->next;  
60
            }
61
            else
62
            {
63
                last->next = new ListNode(list2->val);
64
                last = last->next;
65
                list2 = list2->next;
66
            }
67
        }
68
        
69
        if(list1 != NULL)
70
        {
71
            last->next=list1;
72
        }
73
        
74
        if(list2 != NULL)
75
        {
76
            last->next=list2;
77
        }
78
        
79
        return list3->next;
80
    }
81
};
