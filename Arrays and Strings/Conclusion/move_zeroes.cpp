#define lli long long int
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // no extra space
        
        lli n = nums.size();
        if (n == 0 || n == 1)
            return;
        
        int zero_idx = 0;
        
        for(int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i],nums[zero_idx]);
                    zero_idx++;
            }
                            
        }
        
        
        // uses extra space 
        
//         vector<int> n;
//         lli count_zero = 0;
//         for(auto value : nums)
//         {
//             if (value == 0)
//                 count_zero++;
//             else
//                 n.push_back(value);
//         }
        
//         for(int i = 0; i < count_zero; i++)
//             n.push_back(0);
        
//         nums = n;
            
    }
};
