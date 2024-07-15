class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         if (nums.empty()) return 0;

    int k = 0; // pointer to place the next unique element
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) { // found a new unique element
            nums[k] = nums[i]; // place it at the k-th position
            k++; // move k to the next position
        }
    }
    return k;
    }
};
