// Hash Set - Usage
// Report Issue
// The hash set is one of the implementations of a set which is a data structure to store no repeated values. 

// We provide an example of using the hash set in Java, C++ and Python. If you are not familiar with the usage of the hash set, it will be helpful to go through the example.
  
 
#include <unordered_set>                // 0. include the library

int main() {
    // 1. initialize a hash set
    unordered_set<int> hashset;   
    // 2. insert a new key
    hashset.insert(3);
    hashset.insert(2);
    hashset.insert(1);
    // 3. delete a key
    hashset.erase(2);
    // 4. check if the key is in the hash set
    if (hashset.count(2) <= 0) {
        cout << "Key 2 is not in the hash set." << endl;
    }
    // 5. get the size of the hash set
    cout << "The size of hash set is: " << hashset.size() << endl; 
    // 6. iterate the hash set
    for (auto it = hashset.begin(); it != hashset.end(); ++it) {
        cout << (*it) << " ";
    }
    cout << "are in the hash set." << endl;
    // 7. clear the hash set
    hashset.clear();
    // 8. check if the hash set is empty
    if (hashset.empty()) {
        cout << "hash set is empty now!" << endl;
    }
}


// Find Duplicates By Hash Set
// Report Issue
// As we know, it is easy and effective to insert a new value and check if a value is in a hash set or not.

// Therefore, typically, a hash set is used to check if a value has ever appeared or not.

 

// An Example
// Let's look at an example:

// Given an array of integers, find if the array contains any duplicates. 

// This is a typical problem which can be solved by a hash set.

// You can simply iterate each value and insert the value into the set. If a value has already been in the hash set, there is a duplicate.

 

// Template
// Here we provide a template for you to solve this kind of problems:


/*
 * Template for using hash set to find duplicates.
 */
bool findDuplicates(vector<Type>& keys) {
    // Replace Type with actual type of your key
    unordered_set<Type> hashset;
    for (Type key : keys) {
        if (hashset.count(key) > 0) {
            return true;
        }
        hashset.insert(key);
    }
    return false;
}
