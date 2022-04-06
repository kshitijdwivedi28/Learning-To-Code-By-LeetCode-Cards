//  Top K Frequent Elements

// Solution
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
 

// Constraints:

// 1 <= nums.length <= 105
// k is in the range [1, the number of unique elements in the array].
// It is guaranteed that the answer is unique.
 

// Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> m;
        
        for(auto value : nums)
            m[value]++;
        
        map<int, vector<int>, greater<int>> am;
        
        for(auto value : m)
            am[value.second].push_back(value.first);
        
        
//         for(auto it = am.begin(); it != am.end(); it++)
//         {
//             cout << it->first << " : ";
//             for(auto value : it->second)
//                 cout << value << " ";
            
//             cout << endl;
//         }
        
        vector<int> ans;
        
        for(auto it = am.begin(); it != am.end(); it++)
        {
            if (k > 0)
            {
                for(auto value : it->second)
                    if(k--)
                        ans.emplace_back(value);
                    else
                        break;
            }
            else
                break;
        }

        return ans;
            
        
    }
};
