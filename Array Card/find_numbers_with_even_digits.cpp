class Solution {
public:
    
//     int get_digits(int n)
//     {   
//         int count = 0;
//         while(n>0)
//         {
//             count++;
//             n/=10;  
//         }
        
//         return count;
//     }
    
    int findNumbers(vector<int>& nums) {
        
        int ans = 0;
        
        for(auto value : nums)
        {
            if (!(to_string(value).size() & 1))
                ans++;
        }
        
        return ans;
        
    }
};