// Given a characters array letters that is sorted in non-decreasing order and a character target, 
// return the smallest character in the array that is larger than target.

// Note that the letters wrap around.

// For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
 

// Example 1:

// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Example 2:

// Input: letters = ["c","f","j"], target = "c"
// Output: "f"
// Example 3:

// Input: letters = ["c","f","j"], target = "d"
// Output: "f"
 

// Constraints:

// 2 <= letters.length <= 104
// letters[i] is a lowercase English letter.
// letters is sorted in non-decreasing order.
// letters contains at least two different characters.
// target is a lowercase English letter.


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        // As we are concerned about the next greater element than the target 
        // We can use binary search template 2 for this
        
        int s = 0, e = letters.size();
        
        while( s < e)
        {
            int m = s + (e - s)/2;
            
            if (letters[m] <= target)
                s = m+1;
            
            else 
                e = m;
            
        }
        
        return letters[s % letters.size()];
        
        
        // Trying using upper_bound(), as the vector is sorted it will take log(n) time
        
//         int pos = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        
//         if(pos == letters.size())
//             return letters[0];
//         else 
//             return letters[pos];
          
    }
};