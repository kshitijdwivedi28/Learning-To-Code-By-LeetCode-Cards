class Solution {
public:
    int strStr(string haystack, string needle) {
    
        // for corner cases
        if (needle.size() == 0 || haystack == needle)
            return 0;
        else if (haystack.size() == 0 && needle.size() > 0 || haystack.size() < needle.size())
            return -1;
        
        int ans = 0;
        
        // Lookout for +1 in the for condtion for cases like "abc" and "c"

        for(int i = 0; i < haystack.size()-needle.size()+1; i++)
        {
            if (haystack[i] == needle[0])
            {
                // substr() with complexity O(n) extracts a string from the main string
                // parameters 
                // start of index and length of string to be extracted
                if (haystack.substr(i,needle.size()) == needle)
                    return i;
            }
        }
        
        return -1;
        
    }
};