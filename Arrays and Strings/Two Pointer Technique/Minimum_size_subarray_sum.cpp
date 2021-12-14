class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        long long int sum = accumulate(nums.begin(), nums.end(), 0);
        
        if (sum < target)
            return 0;
        else if (sum == target)
            return nums.size();
               
        // using prefix sum
        // space O(n) Time O(n^2)
        
//         vector<int> prefix_sum(nums.size(),0);
//         prefix_sum[0] = nums[0];
//         int ans = INT_MAX;
        
//         for(int i = 1; i < nums.size(); i++)
//             prefix_sum[i] = prefix_sum[i-1] + nums[i];
        
//         for(int i = 0; i < nums.size(); i++ )
//             for(int j = i; j < nums.size(); j++)
//             {
//                 int total = prefix_sum[j] - prefix_sum[i] + nums[i];
//                 if (total >= target)
//                     ans = min(ans, j-i+1);
//             }
        
//         if (ans == INT_MAX)
//             return 0;
//         else 
//             return ans;
        
        
        // using two pointer approach
        
        int start = 0, subarray_sum = 0, ans = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++)
        {
            subarray_sum += nums[i];
            while(subarray_sum >= target)
            {
                ans = min(ans, i - start + 1); // i - start + 1 is for the length of the sub array
                subarray_sum -= nums[start];
                start++;
            }
        }
        
        return ans;
        
    }
};