// Find the Duplicate Number

// Solution
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
 

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for precisely one integer which appears two or more times.



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        long int len = nums.size();
        int duplicate;
        
        // for(int i = 0; i < len; i++ )
        //     for(int j = i+1; j < len; j++)
        //         if (nums[i] == nums[j])
        //             duplicate = nums[i];
        
//         sort(nums.begin(),nums.end());
//         for(int i = 0; i < len-1; i++)
//             if(nums[i]==nums[i+1])
//                 duplicate = nums[i];
        

        // As there are only positive numbers, we can negate all one time occuring numbers and 
        // If any number is found negative, it might have already been negated so thats the culprit.
        
        for(int i = 0; i < len; i++)
            if (nums[fabs(nums[i])] >= 0)
                nums[fabs(nums[i])] = -nums[fabs(nums[i])];
            else
                duplicate = fabs(nums[i]);
        
        return duplicate;
        
        
    }
};