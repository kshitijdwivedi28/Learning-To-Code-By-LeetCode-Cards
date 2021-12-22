//  Valid Perfect Square

// Solution
// Given a positive integer num, write a function which returns True if num is a perfect square else False.

// Follow up: Do not use any built-in library function such as sqrt.

 

// Example 1:

// Input: num = 16
// Output: true
// Example 2:

// Input: num = 14
// Output: false
 

// Constraints:

// 1 <= num <= 2^31 - 1

class Solution {
public:
    bool isPerfectSquare(long int x) {
        
        
        // SIMPLE BINARY SEARCH TEMPLATE 1
        
        long long int start = 0, end = x;
        
        while(start <= end)
        {
            long long int mid = (start + end)/2;
            
            if (mid * mid == x)
                return true;
            
            else if (mid*mid < x)
                start = mid+1;
            else
                end = mid-1;
        }
        
        return false;
        
    }
        
};