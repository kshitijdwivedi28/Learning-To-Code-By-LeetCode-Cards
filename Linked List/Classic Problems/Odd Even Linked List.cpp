Odd Even Linked List

Solution
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
Example 2:


Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
 

Constraints:

n == number of nodes in the linked list
0 <= n <= 104
-106 <= Node.val <= 106
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
    ListNode* oddEvenList(ListNode* head) {
14
        
15
        if (!head)
16
            return NULL;
17
        
18
        ListNode *odd = head, *even = head->next, *even_head = even;
19
        
20
        while(even && even->next)
21
        {
22
            odd->next = even->next;
23
            
24
            odd = odd->next;
25
            
26
            even->next = odd->next;
27
            
28
            even = even->next;
29
        }
30
        
31
        odd->next = even_head;
32
        
33
        return head;
34
        
35
    }
36
};
