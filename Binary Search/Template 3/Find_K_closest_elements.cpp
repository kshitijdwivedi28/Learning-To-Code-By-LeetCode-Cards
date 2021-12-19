class Solution {
public:
    
    int binary_search_template_3(vector<int> a, int val)
    {
        int s = 0, e = a.size()-1;
        
        while (s + 1 < e)
        {
            int m = s + (e-s)/2;
            
            if (a[m] == val)
                return m;
            
            else if (a[m] < val)
                s = m;
            
            else 
                e = m;
        }
        
        if (abs(a[s] - val) <= abs(a[e] - val ))
            return s;
        else
            return e;
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        //default case;
        if (arr.size() == k)
            return arr;
    
        
        // Binary search template 3 has to be used because there might be cases where number is not in the 
        // array so we need to make decision on the basis of nearby values for which
        // Either use binary search template 3 or upper_bound() function to find the closest index
        
        // So using binary search template 3
        
        
        int nearest_index = binary_search_template_3(arr,x);
        
        int s = nearest_index-1, e = nearest_index;
        
        // moving pointers s and e, k times on the basis of difference in values from x 
        for(int i = 0; i < k; i++)
            if (s < 0)                                       // for x < arr[0], moving end pointer one by one
                e++;
            else if (e >= arr.size())                        // for x > arr[arr.size()-1], moving start pointer  
                s--;                                         // one by one
            else if (abs(arr[s] - x ) <= abs(arr[e] - x))    // decrementing s pointer by one if less diff
                s--;
            else
                e++;
        
        // storing result in 1 go at ans vector
        vector<int> ans(arr.begin()+s+1, arr.begin()+e);
        
        return ans;
        
        
    }
};