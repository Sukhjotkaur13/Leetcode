class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 1; // pointer to place the next unique element
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) { // found a new unique element
            nums[k] = nums[i]; // place it at the k-th position
            k++; // move k to the next position
        }
    }
    return k;
    }
};
