class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
       int count = 0;
        int local_idx = 0;
        for(int i = 0; i < nums.size(); i++)
       {
           if (nums[i] == val)
           {
               count++; 
           }
           else
           {
               swap(nums[i], nums[local_idx]);
               local_idx++;
           }
       }
        
        // for(auto value : nums)
        //     cout << value << " ";
        
        return nums.size() - count;
        
    }
};