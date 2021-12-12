class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        // O(n) and O(1)
        
        int max1, max2, max_index;
        max1 = max2 = 0;
        
        
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == max1 || nums[i] == max2)
                continue;
            else if (nums[i] > max1)
            {
                max2 = max1; 
                max1 = nums[i];
                max_index = i;
            }  
            else if (nums[i] > max2)
                max2 = nums[i];
        }
        
        if (max1 >= (max2*2))
            return max_index;
        else 
            return -1;
    }
};