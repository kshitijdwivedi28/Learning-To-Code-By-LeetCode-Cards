 Remove Linked List Elements

Solution
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 

Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []
Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50
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
    ListNode* removeElements(ListNode* head, int val) {
14
        
15
        if (!head)
16
            return NULL;
17
        
18
//         ListNode *temp = head;
19
//         vector<int> v;
20
        
21
//         while(temp)
22
//         {
23
//             v.push_back(temp->val);
24
//             temp = temp->next;
25
//         }
26
        
27
//         int val_index = 0;
28
        
29
//         for(int i = 0; i < v.size(); i++)
30
//             if (v[i] != val)
31
//             {
32
//                 swap(v[i], v[val_index]);
33
//                 val_index++;
34
//             }
35
​
36
//         ListNode *ans_head = new ListNode(0);
37
//         ListNode *ans = ans_head;
38
        
39
//         for(int i = 0; i < val_index; i++)
40
//         {
41
//             ans->next = new ListNode(v[i]);
42
            
43
//             ans = ans->next;
44
//         }
45
        
46
//         return ans_head->next;
47
        
48
        
49
        
50
        ListNode *temp = head;
51
        while(temp)
52
        {
53
            if (temp->next && temp->next->val == val)
54
            {
55
                if (temp->next->next)
56
                {
57
                    temp->next = temp->next->next;
58
                }
59
                else
60
                {
61
                    temp->next = NULL;
62
                }
63
            }
64
            else
65
                temp = temp->next;
66
        }
67
​
68
        if (head->val == val)
69
            head = head->next;
70
        
71
        return head;
72
    
73
        
74
    }
75
};
