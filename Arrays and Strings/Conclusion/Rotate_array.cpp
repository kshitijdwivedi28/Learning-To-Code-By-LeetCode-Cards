#define lli long long int
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        lli size = nums.size();
        if ( size == 1 || k == 0 || size == k)
                return ;

        lli rotations;
        if ( k > size)
            rotations = k%size;
        else
            rotations = k;
        
        vector<int> ans;
        

//         lli value = nums[size-rotations-1];
//         for(int i = size-rotations; i != size-rotations-1; i++)
//         {   
//             ans.push_back(nums[i]);
//             if(i == size-1)
//                 i = -1;
//         }
        
//         ans.push_back(value);
        
        
        for(int i = nums.size() - rotations; i < nums.size(); i++ )
            ans.push_back(nums[i]);
        
        for(int i = 0; i < nums.size() - rotations; i++)
            ans.push_back(nums[i]);

        nums = ans;
        
    }
};