// Intersection of Two Arrays

// Solution
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

            // Blindly jumping to code
//         vector<int> ans;

//         map<int,int> temp;
//         for(auto value : nums1)
//             temp[value]++;
        
//         nums1.clear();
//         for(auto value : temp)
//             nums1.emplace_back(value.first);
        
//         temp.clear();
//         for(auto value : nums2)
//             temp[value]++;
        
//         nums2.clear();
//         for(auto value : temp)
//             nums2.emplace_back(value.first);
        
//         temp.clear();
        
//         for(int i = 0; i < nums1.size(); i++)
//             if (binary_search(nums2.begin(), nums2.end(), nums1[i]))
//                 ans.push_back(nums1[i]);
        
//         return ans;
        
        
        
    // Approach
    // Sort the 2nd vector
    // Traverse through 1st vector and use binary search to find if the value exists or not in the 2nd vector
    // Store the common values in a set to avoid duplication
        
        vector<int> ans;
        set<int> s;
        
        sort(nums2.begin(), nums2.end());
        
        for(int i = 0; i < nums1.size(); i++)
            if (binary_search(nums2.begin(), nums2.end(), nums1[i]))
                s.insert(nums1[i]);

        for(auto value : s)
            ans.emplace_back(value);
        
        return ans;
        
        
        
        
    }
};