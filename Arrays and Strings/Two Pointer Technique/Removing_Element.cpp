// Removing element in O(1) space 

// Shifting all required elements to the start of the array i.e. using in place operations in the array

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            ++k;
        }
    }
    return k;
}