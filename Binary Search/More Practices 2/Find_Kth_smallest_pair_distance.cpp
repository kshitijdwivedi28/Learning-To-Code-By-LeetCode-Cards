// Find K-th Smallest Pair Distance

// Solution
// The distance of a pair of integers a and b is defined as the absolute difference between a and b.

// Given an integer array nums and an integer k, return the kth smallest distance among all the pairs nums[i] and nums[j] where 0 <= i < j < nums.length.

 

// Example 1:

// Input: nums = [1,3,1], k = 1
// Output: 0
// Explanation: Here are all the pairs:
// (1,3) -> 2
// (1,1) -> 0
// (3,1) -> 2
// Then the 1st smallest distance pair is (1,1), and its distance is 0.
// Example 2:

// Input: nums = [1,1,1], k = 2
// Output: 0
// Example 3:

// Input: nums = [1,6,1], k = 3
// Output: 5
 

// Constraints:

// n == nums.length
// 2 <= n <= 104
// 0 <= nums[i] <= 106
// 1 <= k <= n * (n - 1) / 2
//    Hide Hint #1  
// Binary search for the answer. How can you check how many pairs have distance <= X?

class Solution {
public:
    
    // count total pairs
    int total_pairs(vector<int> nums, int n)
    {
        int ans = 0, s = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            while (nums[i] - nums[s] > n)
                s++;
            
            ans += (i-s);
        }
            
        return ans;
    }
    
    
    int smallestDistancePair(vector<int>& nums, int k) {
        
        // Brute Force TLE
        
//         vector<int> diff;
        
//         for(int i = 0; i < nums.size()-1; i++)
//             for(int j = i+1; j < nums.size(); j++)
//                 diff.push_back(fabs(nums[j]-nums[i]));
        
//         sort(diff.begin(), diff.end());
        
//         return diff[k-1];
        
        // Approach
        // sort the array
        // find minimum and maximum difference
        // Apply binary search with start = minimum diff and end = maximum difference
        // count total pairs in each iteration
        // if total pairs < k
        // move to right
        // else
        // move to left
        // Use template 2 for binary search
        
        sort(nums.begin(), nums.end());
        
        int s = 0, e = nums[nums.size()-1] - nums[0];
        
        // answer lies between s and e
        
        while(s < e)
        {
            int m = s + (e-s)/2;
            
            if (total_pairs(nums, m) < k)
                s = m+1;
            
            else
                e = m;
        }
        
        return s;
        
        
    }
};