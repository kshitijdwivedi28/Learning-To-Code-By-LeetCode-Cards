// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100
// Example 3:

// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

// Constraints:

// -100.0 < x < 100.0
// -231 <= n <= 231-1
// -104 <= xn <= 104




class Solution {
public:
    
    double find_pow(double x, long int n)
    {
        double ans = 1;
        
        if (x == 0)
            return ans;
        
        long int n1 = fabs(n);
        
        while(n1 > 0)
        {
            if (n1 & 1)
            {
                ans *= x;
                n1--;
            }
            else
            {
                x *= x;
                n1 /= 2;
            }
        }
        
        return ans;
        
      
    }
    
    
    double myPow(double x, long int n) {
        
        double ans = find_pow(x,n);
        
        if (n < 0)
            return 1.00000/ans;
        else
            return ans;
    }
};