#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int min_length = INT_MAX;
        
        
        // lookout for exception 
        // value.size() has to be taken into another variable as min() was not working with it directly
        // might be a bug
        for(auto value : strs)
        {
            int len = value.size();
            min_length = min(min_length, len);
        }
            
        
        if (min_length == 0)
            return "";
        
        
        bool flag = true;
        string ans = "";
        
        
        // compare each character with all the same indexed letters in the string vector
        for(int i = 0; i < min_length; i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != strs[j-1][i])
                    flag = false;
            }
            
            if (flag)
                ans += strs[0][i];
        }
        
        return ans;
    }
};