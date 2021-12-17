class Solution {
public:
    
    int search(vector<int>& v, int target) 
    {
        
        // SIMPLY BINARY SEARCH
        int start = 0, end = v.size()-1;

        while(start <= end)
        {
            int mid = (start+end)/2;

            if (v[mid] == target)
                return mid;
            
            // focusing on left sub array
            else if (v[start] <= v[mid]) // check if left array sorted
            {
                if (target <= v[mid] && v[start] <= target) // check if target lies in that region
                    end = mid-1;
                else
                    start = mid+1;
            }
            
            else
            {
                if (v[mid] <= target && target <= v[end])
                    start = mid+1;
                else
                    end = mid-1;
            }   
        }
        
        return -1;  
    }
};
