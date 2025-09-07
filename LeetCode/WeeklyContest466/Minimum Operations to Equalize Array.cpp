/* Minimum Operations to Equalize Array */

/* class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[0]) 
                return 1;
        }

        return 0;
    }
}; */