class Solution {
public:
    int maxProduct(vector<int>& nums) {
         if (nums.empty())
            return 0;

        int max_product = nums[0];
        int min_product = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int temp_max = std::max(nums[i], std::max(max_product * nums[i], min_product * nums[i]));
            int temp_min = std::min(nums[i], std::min(max_product * nums[i], min_product * nums[i]));

            max_product = temp_max;
            min_product = temp_min;

            result = std::max(result, max_product);
        }

        return result;
    }
};