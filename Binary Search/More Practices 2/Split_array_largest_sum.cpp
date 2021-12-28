// Split Array Largest Sum

// Solution
// Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays.

// Write an algorithm to minimize the largest sum among these m subarrays.

 

// Example 1:

// Input: nums = [7,2,5,10,8], m = 2
// Output: 18
// Explanation:
// There are four ways to split nums into two subarrays.
// The best way is to split it into [7,2,5] and [10,8],
// where the largest sum among the two subarrays is only 18.
// Example 2:

// Input: nums = [1,2,3,4,5], m = 2
// Output: 9
// Example 3:

// Input: nums = [1,4,4], m = 3
// Output: 4
 

// Constraints:

// 1 <= nums.length <= 1000
// 0 <= nums[i] <= 106
// 1 <= m <= min(50, nums.length)


class Solution {
public:
    
    int count_subarray_sum(vector<int>& nums, int mid)
    {
        int sum = 0;
        int count = 1;
        for (int i = 0; i < nums.size(); i++) 
            if (sum + nums[i] > mid) 
            {
                count ++;
                sum = nums[i];
            } 
            else 
                sum += nums[i];
        
        return count;
    }
    
    
    int splitArray(vector<int>& nums, int m) {
        
        // To check if a question can be solved by binary search 
        // Always try to see if the solution lies with in a sorted range or not
        // if it does, binary search is possible
        
        // Approach
        // Ans would like between the smallest element and the total sum of the array
        // So, start = maximum element in the array
        // End = Total array sum
        
        // if total subarrays <= m till mid 
        // move to left
        // else
        // move to right
        
        
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        
        int ans = right;
        
        while (left <= right)
        {
            int mid = left + (right-left)/2;
            
            if (count_subarray_sum(nums, mid) <= m)
            {
                ans = min(ans, mid);
                right = mid-1;
            }
            else
                left = mid+1;
        }
        
        return ans;
        
    }
};