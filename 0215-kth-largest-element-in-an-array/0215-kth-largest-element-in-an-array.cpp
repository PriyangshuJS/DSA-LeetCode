class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;

    for (int j = left; j < right; ++j) {
        if (nums[j] >= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}

int quickSelect(vector<int>& nums, int left, int right, int k) {
    int partitionIndex = partition(nums, left, right);
    if (partitionIndex == k - 1) {
        return nums[partitionIndex];
    } else if (partitionIndex > k - 1) {
        return quickSelect(nums, left, partitionIndex - 1, k);
    } else {
        return quickSelect(nums, partitionIndex + 1, right, k);
    }
}

int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    if (k > 0 && k <= n) {
        return quickSelect(nums, 0, n - 1, k);
    }
    return -1; // Invalid case
}
};