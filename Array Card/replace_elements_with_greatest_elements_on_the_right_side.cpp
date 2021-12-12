class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int prev_max;
        int maxi = arr[arr.size()-1];
        
        for(int i = arr.size()-2; i >= 0; i--)
        {
            prev_max = max(maxi, arr[i+1]);
            maxi = arr[i];
            arr[i] = prev_max;
        }
        
        arr[arr.size()-1] = -1;
        
        return arr;
        
    }
};