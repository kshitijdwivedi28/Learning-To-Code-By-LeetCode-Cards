#define lli long long int
class Solution {
public:
    string reverseWords(string s) {
        
//         reverse(s.begin(),s.end());
//         vector<string> reverse;
//         lli len = s.size();
        
//         int start,end;
//         bool start_found, end_found;
//         start_found = end_found = false;
//         int j = 0;
//         for(int i = 0; i < len-1; i++ )
//         {   
//             if(isalnum(s[i]) && start_found==false)
//             {
//                 start = i;
//                 start_found = true;
//             }
//             else if (isspace(s[i+1]) && end_found == false)
//             {
//                 end = i;
//                 end_found = true;
//             }
            
//             if (start_found && end_found)
//             {
//                 reverse[j] = s.substr(start,end-start+1);
//                 j++;
//                 start_found = end_found = false;
//             }
                
//         }
        
//         string ans="";
//         lli n = reverse.size();
//         for(int i = n-1; i >= 0; i--)
//         {
//             ans+=(reverse[i]+' ');
//         }
        
//         return ans;
        
        
        stringstream ss(s);
        string word;
        vector<string> rev;
        string ans;
        
        while(ss >> word)
            rev.push_back(word);
        
        for(int i = rev.size()-1; i >= 1; i--)
            ans += rev[i] + ' ';
        
        ans += rev[0];
        
        
        return ans;
        
        
        
    }
};