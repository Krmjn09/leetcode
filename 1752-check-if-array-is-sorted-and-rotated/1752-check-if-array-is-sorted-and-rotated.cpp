class Solution {
public:
   bool check(vector<int>& nums) {
        int count_breaks = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                count_breaks++;
            }
        }

        // Check the break from last to first element (for rotation)
        if (nums[n - 1] > nums[0]) {
            count_breaks++;
        }

        // The array is valid if there is at most one break
        return count_breaks <= 1;
    }
};