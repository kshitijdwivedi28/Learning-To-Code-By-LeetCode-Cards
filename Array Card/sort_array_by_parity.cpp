class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        
        int n = nums.size();
        
        if (n == 1 || n == 0)
            return nums;
        
        int odd_idx = 0;
        
        for(int i = 0; i < n; i++)
        {
            if (!(nums[i] & 1))
            {
                swap(nums[i], nums[odd_idx]);
                odd_idx++;
            }
        }
        
        return nums;
        
    }
};