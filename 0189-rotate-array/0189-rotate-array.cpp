class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k % n == 0) {
            return; // No need to rotate if n <= 1 or k is a multiple of n
        }

        vector<int> ans(n);

        // Calculate the effective rotation index
        k %= n;

        for (int i = 0; i < n; i++) {
            ans[(i + k) % n] = nums[i];
        }

        nums.assign(ans.begin(), ans.end());
    }
};
