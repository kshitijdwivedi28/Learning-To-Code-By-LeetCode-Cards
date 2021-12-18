#include<bits/stdc++.h>
class Solution {
public:
    
//     int binary_search_1(vector<int>& nums, int s, int e, int t)
//     {
//         int ans = -1;
        
//         while( s <= e)
//         {
//             int m = s+(e-s)/2;
            
//             if (nums[m] > t)
//                 e = m-1;   
            
//             else if (nums[m] < t)
//                 s = m+1;
            
//             else
//             {
//                 ans = m;
//                 e = m-1;
//             }    
//         }
        
//         return ans;
//     }
    
    
//     int binary_search_2(vector<int>& nums, int s, int e, int t)
//     {
//         int ans = -1;
//         while( s <= e)
//         {
//             int m  = s+(e-s)/2;
            
//             if (nums[m] > t)
//                 e = m-1;
                
//             else if (nums[m] < t)
//                 s = m+1;
            
//             else 
//             {
//                 ans = m;
//                 s = m+1;
//             }
//         }
        
//         return ans;
//     }
    
    
    
        vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        int start_index = -1, end_index = -1;
        
        
        // complexity O(n)
            
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if (nums[i] == target)
        //     {
        //         if (start_index == -1)
        //         {   
        //             start_index = i;
        //             end_index = i;
        //         }
        //         else
        //             end_index = i;
        //     }    
        // }
            
        
    
//         USING BINARY SEARCH 
        
//         First find the first occurence index of target 
//         Second find the last occurence index of target    
        
//         start_index = binary_search_1(nums, 0, nums.size()-1, target);
//         end_index = binary_search_2(nums,0, nums.size()-1, target);
        
        
//         ans.push_back(start_index);
//         ans.push_back(end_index);  
       
//         return ans;
        
       
        // using lower bound and upper bound
        
        if (nums.size() == 0 || target > nums[nums.size()-1] )
            return {-1,-1};
        
        start_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        end_index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        if (nums[start_index] != target)
            return {-1, -1};
        
        return {start_index, end_index-1};
        
    }
};