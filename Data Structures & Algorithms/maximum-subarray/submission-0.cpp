class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = nums[0];
        int res = nums[0];
        for (int  i = 1; i < nums.size(); i++) {
            curMax = max(nums[i], curMax + nums[i]);
            res = max(res, curMax);
        }
        return res;
    }
};
