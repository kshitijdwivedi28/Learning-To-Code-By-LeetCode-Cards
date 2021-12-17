class Solution {
public:
    
//     int binary_search_using_recursion(vector<int>&nums, int start, int end, int target)
//     {
//         if(start <= end)
//         {
//             int mid = (end + start)/2;
            
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 return binary_search_using_recursion(nums,mid+1,end,target);
//             else 
//                 return binary_search_using_recursion(nums,start,mid-1,target); 
//         }
        
//         return -1;
        
//     }
    
    int search(vector<int>& nums, int target) {
        
//         int ans = binary_search_using_recursion(nums, 0, nums.size()-1, target);
            
//         return ans;
        
        
        
        // loop approach
        
        int start = 0, end = nums.size()-1;
        
        while( start <= end)
        {
            // int mid = start + (end - start)/2;
            int mid = (end + start)/2;
            
            if (nums[mid] == target)
                return mid;
            
            else if (nums[mid] < target)
                start = mid+1;
            
            else 
                end = mid-1;  
        }
        
        return -1;
        
    }
};
