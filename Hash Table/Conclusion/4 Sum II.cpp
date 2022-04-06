// 4Sum II

// Solution
// Given four integer arrays nums1, nums2, nums3, and nums4 all of length n, return the number of tuples (i, j, k, l) such that:

// 0 <= i, j, k, l < n
// nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
 

// Example 1:

// Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
// Output: 2
// Explanation:
// The two tuples are:
// 1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
// 2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0
// Example 2:

// Input: nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
// Output: 1
 

// Constraints:

// n == nums1.length
// n == nums2.length
// n == nums3.length
// n == nums4.length
// 1 <= n <= 200
// -228 <= nums1[i], nums2[i], nums3[i], nums4[i] <= 228

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)     {
//         unordered_map<int, int> m;
//         set<vector<int>> s;
        
//         for(int i = 0; i < nums4.size(); i++)
//             m[nums4[i]] = i;
            
        
//         for(int i = 0; i < nums1.size(); i++)
//             for(int j = 0; j < nums1.size(); j++)
//                 for(int k = 0; k < nums1.size(); k++)
//                 {
//                     int fourth_value = 0 - (nums1[i] + nums2[j] + nums3[k]);
                    
//                     if (m.find(fourth_value) != m.end())
//                         s.insert({i, j, k, m[fourth_value]});      
//                 }
                     
//         return s.size();
        
        // better O(n^2) 
        
        unordered_map<int, int> m;
        int ans = 0;
        
        for(auto value1 : nums1)
            for(auto value2 : nums2)
                m[value1 + value2]++;
        
        for(auto value3 : nums3)
            for(auto value4 : nums4)
                ans += m[- (value3 + value4)];
        
        return ans;
        
    }
};
