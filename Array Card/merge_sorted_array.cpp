class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
//         int zero_count = 0;
        
//         for(auto value : arr)
//             if (!value)
//                 zero_count++;
        
//         if(!zero_count)
//             return;
    
        for(int i = 0; i < arr.size(); i++)
        {
            if (!arr[i])
            {
                for(int j = arr.size()-2; j >= i; j--)
                    arr[j+1] = arr[j];
                
                arr[i] = 0;
                i++;
                
//                 for(auto value : arr)
//                     cout << value << " ";
                
                
//                 cout << endl;
                
            }
        }
        
        
        
    }
};