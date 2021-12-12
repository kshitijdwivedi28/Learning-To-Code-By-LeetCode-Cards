class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans = INT_MIN, start, end;
        start = end = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if ( nums[i] == 1)
            {
                start++;
                ans = max(start,ans); 
            }  
            else
            {
                start = 0;
            } 
            
        }
        
        return ans;
        
    }
};