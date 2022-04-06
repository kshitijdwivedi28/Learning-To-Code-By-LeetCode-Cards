// Longest Substring Without Repeating Characters

// Solution
// Given a string s, find the length of the longest substring without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
//         string substring = "";
//         int ans = 0;
        
//         for(auto value : s)
//         {
//             // if element is already in the substring, 
//             // find its location and start the new substring from its next location
//             if (substring.find(value) != string::npos)
//             {
//                 int ptr = substring.find(value);
//                 substring = substring.substr(ptr+1);
//             }
            
//             // else keep adding the new element in the string and updating the ans value
            
//             substring +=  value;
//             ans = max(ans, (int)(substring.size()));
//         }
        
//         return ans;     
        
        
//         unordered_map<char, int> m;
        
//         int ans = 0, len = 0;
        
//         for(int i = 0; i < s.size(); i++)
//         {
//             if (m[s[i]])
//             {
//                 ans = max(len, ans);
//                 len = 1;
//             }
//             else
//             {
//                 m[s[i]]++;
//                 len++;
//             }
//         }
        
//         return ans;
        
        unordered_set<char> set;
    
		int i = 0, j = 0, n = s.size(), ans = 0;
    
		while( i<n && j<n)
		{
			if(set.find(s[j]) == set.end()) //If the character does not in the set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the left side counter i, and continue with the checking for substring. */
			}
		}
    
		return ans;
    }
};
