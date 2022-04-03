// First Unique Character in a String

// Solution
// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

// Example 1:

// Input: s = "leetcode"
// Output: 0
// Example 2:

// Input: s = "loveleetcode"
// Output: 2
// Example 3:

// Input: s = "aabb"
// Output: -1
 

// Constraints:

// 1 <= s.length <= 105
// s consists of only lowercase English letters.


#define lli long long int
class Solution {
public:
    int firstUniqChar(string s) {
        
//         PREVIOUS
        
//         lli len = s.size();
//         map<char,lli> mp;
        
//         for(int i = 0; i < len; i++)
//         {
//             mp[s[i]]=0;
//         }
        
        
//         for(int i = 0; i < len; i++)
//         {
//             mp[s[i]]++;
//         }
        
//         for(int i = 0; i < len; i++)
//         {
//             if (mp[s[i]]==1)
//                 return i;
//         }
        
//         return -1;
        
        
        // MODIFIED
            
        map<char, int> count;
        
        for(auto value : s)
            count[value]++;
        
        for(int i = 0; i < s.size(); i++)
            if (count[s[i]]==1)
                return i;
        
        return -1;
        
    }
};
