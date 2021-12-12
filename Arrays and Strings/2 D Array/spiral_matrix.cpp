class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<int> ans;
        
        int i, r = 0, c = 0;
 
        while (r < rows && c < cols) 
        {
            for (i = c; i < cols; ++i) 
                ans.push_back(matrix[r][i]);
            
            r++;
 
            for (i = r; i < rows; ++i)
               ans.push_back(matrix[i][cols-1]);
            
            cols--;
 
            if (r < rows) 
            {
                for (i = cols - 1; i >= c; --i) 
                    ans.push_back(matrix[rows-1][i]);
                
                rows--;
            }
 
    
            if (c < cols) 
            {
                for (i = rows - 1; i >= r; --i) 
                    ans.push_back(matrix[i][c]);
                
                c++;
            }
        
        }
        
        return ans;
    }
};