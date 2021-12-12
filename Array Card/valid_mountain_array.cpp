class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if (arr.size() < 3)
            return false;
        
        int maxi = *max_element(arr.begin(),arr.end());
        int idx = max_element(arr.begin(),arr.end()) - arr.begin();
        
        cout << maxi << " " << idx << endl;
        
        if (idx == arr.size()-1 || idx == 0)
            return false;
        
        for(int i = 0; i < idx; i++)
            if (arr[i] >= arr[i+1])
                return false;
        
        for(int j = idx; j < arr.size()-1; j++)
            if (arr[j] <= arr[j+1])
                return false;
        
        return true;
                
        
        
    }
};