class Solution {
public:
    long long int mySqrt(long long int x) {
        
        long long int start = 0, end = sqrt(x)+2, ans;
        
        while(start <= end)
        {
            long long int mid = (start + end)/2;
            
            if (mid * mid == x)
            {
                ans = mid;
                break;
            }
            
            else if (mid*mid < x)
            {
                if ((mid+1)*(mid+1) > x)
                {
                    ans = mid;
                    break;
                }
                
                else 
                    start = mid+1;
            }   
            else
                end = mid-1;
        }
        
        return ans;
        
    }
};
