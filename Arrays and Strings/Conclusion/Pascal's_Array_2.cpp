class Solution {
public:
    
        long double fact(int n)
        {
            long double sum = 0;
  
            if (n == 0)
                return 1;
  
            for (int i = 1; i <= n; i++) 
                sum += log(i);
            
            return round(exp(sum));
        }
    
        int ncr(int n, int r)
        {     
            return round(fact(n)/(fact(r)*fact(n-r)));
        }
            
    
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        
        for(int i = 0; i <= rowIndex; i++)
            ans.emplace_back(ncr(rowIndex, i));
                            
        return ans;
        
    }
};