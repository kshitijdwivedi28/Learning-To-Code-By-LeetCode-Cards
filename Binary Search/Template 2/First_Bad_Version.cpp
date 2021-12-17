// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long int firstBadVersion(long long int n) {
        
        long long int s = 0, e = n+1, ans = INT_MIN;
        
        while(s < e)
        {
            int m = s + (e - s)/2;
            
            // Ans will be the first bad version, so just need to check if the previous before mid is false 
            if (isBadVersion(m) == true && isBadVersion(m-1) == false )
            {
                ans = m;
                break;
            }
                
            else if (isBadVersion(m) == false)
                s = m+1;
            
            else 
                e = m;
        }
        
        return ans;
    }
};