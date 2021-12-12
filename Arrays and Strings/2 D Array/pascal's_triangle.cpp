class Solution {
public:
    
    
//         long long int can store maximum 20 factorial
//         To calculate factorial of large numbers use below procedure of log
    
//         Whenever use long double make sure to round off the value to get the correct answer
    
//         N! = N*N-1*N-2.....1
            
//         log(N!) = log(N) + log(N-1) .....
            
//         So, e^(log N!) = N!
            
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
            
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans(numRows);
        
        for(int i = 0; i < numRows; i++)
            for(int j = 0; j <= i; j++)
                ans[i].emplace_back(ncr(i,j));

        
        
        return ans;
        
    }
};