// Happy Number

// Solution
// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

 

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1
// Example 2:

// Input: n = 2
// Output: false
 

// Constraints:

// 1 <= n <= 231 - 1
// C++	
1
class Solution {
2
public:
3
    
4
    int get_digit_square_sum(int n)
5
    {
6
        int ans = 0;
7
        
8
        while(n > 0)
9
        {
10
            ans += (n%10)*(n%10);
11
            n/=10;
12
        }
13
        
14
        return ans;
15
    }
16
    
17
    bool isHappy(int n) {
18
        
19
        unordered_set<int> s;
20
        
21
        while(true)
22
        {
23
            int value = get_digit_square_sum(n);
24
            
25
            n = value;
26
            
27
            if (value == 1)
28
                break;
29
            
30
            else if (s.count(value))
31
                return false;
32
            
33
            else
34
                s.insert(value);
35
        }
36
        
37
        return true;  
38
    }
39
};
