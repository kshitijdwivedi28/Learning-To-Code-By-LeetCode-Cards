Intersection of Two Arrays

Solution
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
C++	
1
class Solution {
2
public:
3
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4
​
5
            // Blindly jumping to code
6
//         vector<int> ans;
7
​
8
//         map<int,int> temp;
9
//         for(auto value : nums1)
10
//             temp[value]++;
11
        
12
//         nums1.clear();
13
//         for(auto value : temp)
14
//             nums1.emplace_back(value.first);
15
        
16
//         temp.clear();
17
//         for(auto value : nums2)
18
//             temp[value]++;
19
        
20
//         nums2.clear();
21
//         for(auto value : temp)
22
//             nums2.emplace_back(value.first);
23
        
24
//         temp.clear();
25
        
26
//         for(int i = 0; i < nums1.size(); i++)
27
//             if (binary_search(nums2.begin(), nums2.end(), nums1[i]))
28
//                 ans.push_back(nums1[i]);
29
        
30
//         return ans;
31
        
32
        
33
        
34
    // Approach
35
    // Sort the 2nd vector
36
    // Traverse through 1st vector and use binary search to find if the value exists or not in the 2nd vector
37
    // Store the common values in a set to avoid duplication
38
        
39
//         vector<int> ans;
40
//         set<int> s;
41
        
42
//         sort(nums2.begin(), nums2.end());
43
        
44
//         for(int i = 0; i < nums1.size(); i++)
45
//             if (binary_search(nums2.begin(), nums2.end(), nums1[i]))
46
//                 s.insert(nums1[i]);
47
​
48
//         for(auto value : s)
49
//             ans.emplace_back(value);
50
        
51
//         return ans;
52
        
53
        
54
        
55
    // New Approach using sets
56
        
57
        unordered_set<int> s1;
58
        unordered_set<int> s2;
59
        
60
        for(auto value : nums1)
61
            s1.insert(value);
62
        
63
        for(auto value : nums2)
64
            if (s1.count(value))
65
                s2.insert(value);
66
        
67
        vector<int> ans(s2.begin(), s2.end());
68
        
69
        return ans;
70
​
71
    }
72
};
