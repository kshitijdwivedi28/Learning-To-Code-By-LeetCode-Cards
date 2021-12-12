class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
//         TOO COMPLEX APPROACH ( 3 * O(n) )
        
//         int first_max = INT_MIN;
//         int second_max = INT_MIN;
//         int third_max = INT_MIN;
        
        
//         for(auto value : nums)
//             first_max = max(first_max,value);
        
//         vector <int>::iterator it;
//         nums.erase(remove(nums.begin(),nums.end(),first_max),nums.end());
        
//         for(auto value : nums)
//             second_max = max(second_max,value);
//         nums.erase(remove(nums.begin(),nums.end(),second_max),nums.end()); 
        
        
//         for(auto value : nums)
//             third_max = max(third_max,value);
        
//         long long size = nums.size();
        
//         if (!size)
//             return first_max;
//         else
//             return third_max;
        
        
//     SIMPLER APPROACH with O(n)    
        
        long long max1, max2, max3;
        max1 = max2 = max3 = LONG_LONG_MIN;
        
        for(auto value : nums)
        {
            if (value == max1 || value == max2 || value == max3)
                continue;
            
            else if (value > max1)
            {
                max3 = max2; max2 = max1; max1 = value;
            }
            
            else if (value > max2)
            {
                max3 = max2; max2 = value;
            }
            
            else if (value > max3)
            {
                max3 = value;
            }
        }
        
        if (max3 == LONG_LONG_MIN)
            return max1;
        else
            return max3;
        

        
    }
};