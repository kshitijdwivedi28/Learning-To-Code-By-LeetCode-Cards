class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        vector<int> ans;
        
        for(auto value : nums)
            ans.push_back(value * value);
        
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};