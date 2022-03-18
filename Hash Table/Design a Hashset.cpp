//  Design HashSet

// Solution
// Design a HashSet without using any built-in hash table libraries.

// Implement MyHashSet class:

// void add(key) Inserts the value key into the HashSet.
// bool contains(key) Returns whether the value key exists in the HashSet or not.
// void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.
 

// Example 1:

// Input
// ["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
// [[], [1], [2], [1], [3], [2], [2], [2], [2]]
// Output
// [null, null, null, true, false, null, true, null, false]

// Explanation
// MyHashSet myHashSet = new MyHashSet();
// myHashSet.add(1);      // set = [1]
// myHashSet.add(2);      // set = [1, 2]
// myHashSet.contains(1); // return True
// myHashSet.contains(3); // return False, (not found)
// myHashSet.add(2);      // set = [1, 2]
// myHashSet.contains(2); // return True
// myHashSet.remove(2);   // set = [1]
// myHashSet.contains(2); // return False, (already removed)
 

// Constraints:

// 0 <= key <= 106
// At most 104 calls will be made to add, remove, and contains.
// C++	

1
class MyHashSet {
2
public:
3
    vector<bool> hash;
4
    
5
    MyHashSet() {
6
        
7
        hash.resize(1e6+1, false);    
8
    }
9
    
10
    void add(int key) {
11
        
12
        hash[key] = true;
13
        
14
    }
15
    
16
    void remove(int key) {
17
        
18
        hash[key] = false;  
19
    }
20
    
21
    bool contains(int key) {
22
        
23
        return hash[key];
24
        
25
    }
26
};
27
​
28
/**
29
 * Your MyHashSet object will be instantiated and called as such:
30
 * MyHashSet* obj = new MyHashSet();
31
 * obj->add(key);
32
 * obj->remove(key);
33
 * bool param_3 = obj->contains(key);
34
 */
