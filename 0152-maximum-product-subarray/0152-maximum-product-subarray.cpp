class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];

        for (int i = 1; i < n; i++) {
            int temp = maxProduct;
            maxProduct = max({nums[i], nums[i] * maxProduct, nums[i] * minProduct});
            minProduct = min({nums[i], nums[i] * temp, nums[i] * minProduct});
            result = max(result, maxProduct);
        }

        return result;
    }
};