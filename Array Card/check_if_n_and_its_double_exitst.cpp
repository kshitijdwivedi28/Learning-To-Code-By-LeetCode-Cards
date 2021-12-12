class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        // Saving Memory
        
//         for(int i = 0; i < arr.size(); i++)
//             for(int j = 0; j < arr.size(); j++ )
//                 if (i != j && arr[j] == 2*arr[i])
//                     return true;
      
//         return false;
        
        
        
        
        // Saving time
        
        unordered_set<int>s;
        for(auto i :arr)
        {
            if(s.find(2*i)!=s.end() || s.find(i/2)!=s.end() && i%2==0)
                return true;
            s.insert(i);
        }
        return false;
        
        
    }
};