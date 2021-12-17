class Solution {
public:
      
    int findMin(vector<int>& nums) {
        
        int s = 0, e = nums.size()-1;
        
        if (nums.size() == 1)
            return nums[0];
        
        while ( s < e)
        {
            int m = s + (e-s)/2;
            
            if (nums[m] == nums[e])// || nums[m] == nums[s])
                e--;
            
            else if (nums[m] > nums[e])
                s = m+1;
                
            else
                e = m;
                
        }
        
        return nums[e];
            
    }
};