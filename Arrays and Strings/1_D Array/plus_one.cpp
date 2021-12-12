class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
//         if (digits[digits.size()-1] >= 0 && digits[digits.size()-1] < 9)
//         {
//             digits[digits.size()-1] += 1;
//         }
//         else
//         {
//             int i = digits.size()-1;
//             int count9 = 0;
//             while(digits[i] == 9 && i > 0)
//             {
//                 digits[i] = 0;
//                 count9++;
//                 i--;
//             }
            
//             digits[i] += 1;
            
//             if (count9 == digits.size()-1)
//             {
//                 vector<int> ans;
                
//             //    cout << "ANS ";
            
//                 for(int i = 0; i < digits.size(); i++)
//                     if (digits[i] == 10 )
//                     {
//                         ans.push_back(1);
//                         ans.push_back(0);
//                     }
//                     else
//                         ans.push_back(digits[i]);
                
//                 return ans;
//             }

//         }
        
//         return digits;
        
        
        
        // SIMPLE ADDITION - in place changes
        
        int sum = 0, carry = 0;
        
        for(int i = digits.size()-1; i >= 0; i--)
        {
            if( i == digits.size()-1)
                digits[i] += 1;
            
            sum = digits[i] + carry;
            digits[i] = sum%10;
            carry = sum/10;
        }
        
        if (carry)
            digits.insert(digits.begin(),1);
        
        return digits;
        
        
            
        
        
    }
};