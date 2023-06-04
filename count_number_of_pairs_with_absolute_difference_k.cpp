class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                if (abs (nums[i] - nums[j]) == k)
                    result++;
        return result;
    }
};
