

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
                
//      SIMPLE - BINARY SEARCH (HINT GIVEN - COMPELXITY log(n) but not mentioned array is sorted.
        
        int start = 0, end = nums.size()-1;
        
        while(start < end)
        {
            int mid = (start+end)/2;
            
            if ( nums[mid] > nums[mid+1])
                end = mid;
            else
                start = mid+1;
        }
        
        return start;
    }
};