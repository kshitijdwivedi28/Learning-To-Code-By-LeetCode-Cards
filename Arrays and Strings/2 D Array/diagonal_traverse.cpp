Question - https://leetcode.com/problems/diagonal-traverse/

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
//         vector<int> ans;
//         vector<int> temp;
        
//         if( mat.size() == 1 || mat[0].size() == 1)
//         {
//             for(int i = 0; i < mat.size(); i++)
//                 for(int j = 0; j < mat[0].size(); j++)
//                     ans.push_back(mat[i][j]);
            
//             return ans;
//         }
        
//         for(int i = 0; i < mat.size() + mat[0].size() - 1; i++)
//         {
//             temp.clear();
            
//             for(int r = 0; r < mat.size(); r++)
//             {
//                 for(int c = 0; c < mat[0].size(); c++)
//                     if (r + c == i)
//                         temp.push_back(mat[r][c]);
//             }
            
//             if (i%2 == 0)
//                 reverse(temp.begin(), temp.end());
            
//             for(auto value : temp)
//                     ans.push_back(value);
//         } 
        
//         return ans;
        
        
        // COmplexity O(mn) < previous one O(n+m-1) * O(mn)
        // Space O(mn) < previous one O(mn) + O(m)
        
        long int r = mat.size(), c = mat[0].size(), x = 0, y = 0;
        
        vector<int> ans(r*c);
        
        for(int i = 0; i < ans.size(); i++)
        {
            ans[i] = mat[x][y];
            
            if ((x+y) & 1)
            {
                if(x == r-1)
                    y++;
                else if (y == 0)
                    x++;
                else
                {
                    x++;
                    y--;
                }  
            }
            else
            {
                if(y == c-1)
                    x++;
                else if ( x == 0)
                    y++;
                else
                {
                    x--;
                    y++;
                }
            }
        }
        
        return ans;
    }
};
