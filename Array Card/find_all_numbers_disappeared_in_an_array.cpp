class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
//         set<int> s;
        
//         for(auto value : nums)
//             s.insert(value);
        
        
        // alternate of first step
        
//         set<int> s(nums.begin(),nums.end());
        
//         // O(n log n) time and O(n) space (at max) for set elements
        
//         vector<int> ans;
        
//         for(int i = 1; i <= nums.size(); i++ )
//         {
//             if (s.find(i) == s.end())
//                 ans.push_back(i);
//         }
        
//         return ans;
        
        
        
        
        // Space and be reduced by binary search, vector ans space can be ignored given in question
        
//         vector<int> ans;
        
//         sort(nums.begin(), nums.end());
        
//         for(int i = 1; i <= nums.size(); i++)
//             if (!binary_search(nums.begin(), nums.end(), i))
//                 ans.push_back(i);
        
//         return ans;
        
        
        // Placing values at their correct places and checking which are misplaced 
        // O(n) time reference leetcode discussion
        
//         vector<int> ans;
        
//         // bound to complete in O(n) time since all values are being placed at their respective locations 
//         // it will eventually lead to a match of value at its required location
//         for(auto value : nums)
//             while(nums[value-1] != value)
//                 swap(value, nums[value-1]);
        
//         for(int i = 0; i < nums.size(); i++)
//             if (nums[i] != i+1)
//                 ans.push_back(i+1);
        
//         return ans;
        
        
        
        // awesome technique
        // mark values negative whose indices are in the array
        // the indices having positive values will be the missing numbers i.e. answer
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
        
        for(int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                ans.push_back(i+1);
        
        return ans;
                
        
        
            
        
        
        
        
    }
};