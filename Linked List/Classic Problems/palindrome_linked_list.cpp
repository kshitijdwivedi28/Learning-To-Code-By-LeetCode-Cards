Palindrome Linked List

Solution
Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?
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
    bool isPalindrome(ListNode* head) {
14
        
15
        ListNode *slow = head, *fast = head, *prev = NULL, *tmp;
16
        
17
        while(fast && fast -> next) // finding mid point
18
            fast = fast -> next -> next,
19
        
20
        tmp = slow -> next, slow -> next = prev, prev = slow, slow = tmp ;         
21
        
22
        slow = (fast ? slow -> next : slow); // for odd length case as mentioned above
23
        
24
        while(slow) // check if linked lists starting at prev and slow are equal
25
            if(slow -> val != prev -> val) 
26
                return false;
27
            else slow = slow -> next, prev = prev -> next;
28
        
29
        return true;
30
     
31
    }
32
};
