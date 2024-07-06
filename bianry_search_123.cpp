class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }

private:
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        if (low > high) {
            return -1; // base case: target not found
        }
        
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid; // base case: target found
        } else if (nums[mid] > target) {
            return binarySearch(nums, target, low, mid - 1); // search in the left half
        } else {
            return binarySearch(nums, target, mid + 1, high); // search in the right half
        }
    }
};
