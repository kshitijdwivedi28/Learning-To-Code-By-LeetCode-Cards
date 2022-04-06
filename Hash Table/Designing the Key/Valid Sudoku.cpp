// Valid Sudoku

// Solution
// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.
 

// Example 1:


// Input: board = 
// [["5","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: true
// Example 2:

// Input: board = 
// [["8","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: false
// Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
 

// Constraints:

// board.length == 9
// board[i].length == 9
// board[i][j] is a digit 1-9 or '.'.


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
//         map<char,int> m;
        
//         // for all rows
//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }      
//             }
            
//             m.clear();
//         }
        
//         // for all columns
//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if (isdigit(board[j][i]))
//                 {
//                     m[board[j][i]]++;
                    
//                     if (m[board[j][i]] > 1)
//                         return false;
//                 }           
//             }  
//             m.clear();
//         }

        
//         // for each sub box 
//         // for 1st
//         for(int i = 0; i < 3; i++)
//         {
//             for(int j = 0; j < 3; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }      
//             } 
//         }
//         m.clear();
        
//         // for 2nd
//         for(int i = 0; i < 3; i++)
//         {
//             for(int j = 3; j < 6; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }     
//             }
//         }
//         m.clear();
        
        
//         // for 3rd
//         for(int i = 0; i < 3; i++)
//         {
//             for(int j = 6; j < 9; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }     
//             } 
//         }
//         m.clear();
            
        
//         // for 4th
//         for(int i = 3; i < 6; i++)
//         {
//             for(int j = 0; j < 3; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }    
//             }
//         }
        
//         m.clear();
            
//         // for 5th
//         for(int i = 3; i < 6; i++)
//         {
//             for(int j = 3; j < 6; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }   
//             }
//         }
        
//         m.clear();
        
        
//         //for 6th
//         for(int i = 3; i < 6; i++)
//         {
//             for(int j = 6; j < 9; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }   
//             }  
//         }
        
//         m.clear();
        
        
//         // for 7th
//         for(int i = 6; i < 9; i++)
//         {
//             for(int j = 0; j < 3; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }       
//             } 
//         }
     
//         m.clear();
            
        
//         // for 8th
//         for(int i = 6; i < 9; i++)
//         {
//             for(int j = 3; j < 6; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }   
//             }
//         }
        
//         m.clear();
        
        
        
//         // for last sub box
//         for(int i = 6; i < 9; i++)
//         {
//             for(int j = 6; j < 9; j++)
//             {
//                 if (isdigit(board[i][j]))
//                 {
//                     m[board[i][j]]++;
                    
//                     if (m[board[i][j]] > 1)
//                         return false;
//                 }     
//             }
//         }

//         return true;
        
        
        
        
        // Shorter Approach (taken reference from discussions)
        // Exceptional bit handling
        // Very fast
        
        int sub_matrix[9] = {0}, rows[9] = {0}, columns[9] = {0};
        
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                if(isdigit(board[i][j]))
                {
                    // adjusting value of board to index
                    int t1 = board[i][j]-'1';
                    
                    int t2 = 1<<t1;
                    
                    int res = (sub_matrix[(i/3)*3 + (j/3)] | columns[j] | rows[i]);
                    
                    if(res & t2)
                        return false;
                    
                    sub_matrix[(i/3)*3 + (j/3)] |= t2; 
                    columns[j] |= t2;
                    rows[i] |= t2;
                    
                }
        
        return true;

    }
};
