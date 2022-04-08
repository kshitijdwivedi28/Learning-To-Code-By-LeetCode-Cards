//   Reverse Linked List
// Report Issue
// Let's start with a classic problem:

// Reverse a singly linked list.

// One solution is to iterate the nodes in original order and move them to the head of the list one by one. It seems hard to understand. We will first use an example to go through our algorithm. 

 

// Algorithm Overview
// Let's look at an example:



// Keep in mind that the black node 23 is our original head node.

// 1. First, we move the next node of the black node, which is node 6, to the head of the list:



// 2. Then we move the next node of the black node, which is node 15, to the head of the list:



// 3. The next node of the black node now is null. So we stop and return our new head node 15.

 

// More
// In this algorithm, each node will be moved exactly once.

// Therefore, the time complexity is O(N), where N is the length of the linked list. We only use constant extra space so the space complexity is O(1).

// This problem is the foundation of many linked-list problems you might come across in your interview. If you are still stuck, our next article will talk more about the implementation details.

// There are also many other solutions. You should be familiar with at least one solution and be able to implement it.

Reverse Linked List

Solution
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
 

Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?

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
    ListNode* reverseList(ListNode* head) {
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
//         reverse(a.begin(), a.end());
29
        
30
//         ListNode *ans_head = new ListNode(0);
31
//         ListNode *ans = ans_head;
32
        
33
//         for(auto value : a)
34
//         {
35
//             ans->next = new ListNode(value);
36
//             ans = ans->next;
37
//         }
38
        
39
//         return ans_head->next;
40
        
41
        
42
        ListNode *prev_node = NULL, *next_node;
43
        
44
        while(head)
45
        {
46
            next_node = head->next;
          
            head->next = prev_node;
            
            prev_node = head;
          
            head = next_node;
53
        }
54
        
55
        return prev_node;
56
        
57
    }
58
};
