class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array case
        
        int i = 0; // Pointer for unique elements
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;               // Increment unique element index
                nums[i] = nums[j]; // Update the array in-place
            }
        }
        return i + 1; // Return the number of unique elements
    }
};
