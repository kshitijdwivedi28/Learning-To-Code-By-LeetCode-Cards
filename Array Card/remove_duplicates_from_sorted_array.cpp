#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int idx = 1;
        
        for(int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i-1])
            {
                nums[idx] = nums[i];
                    idx++;
            }
            
            // for(auto value : nums)
            //     cout << value << " ";
            // cout << endl;
        }
            
        if (n)
            return idx;
        else
            return 0;
        
        
//          Easy approach
//         set<int> s;
//         int idx = 0;
        
//         for(auto value : nums)
//             s.insert(value);
        
//         for(auto value : s)
//             nums[idx++] = value;
    

//         return s.size();
            
        
    }
};