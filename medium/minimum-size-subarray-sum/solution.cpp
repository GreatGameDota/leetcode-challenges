class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++)
            nums[i] += nums[i-1];
        
        int start = 0, end = 0, minDist = INT_MAX;
        while (end < nums.size()) {
            if (nums[end] - (start == 0 ? 0 : nums[start - 1]) >= target) {
                minDist = min(minDist, end - start + 1);
                start++;
            } else
                end++;
        }
        return minDist == INT_MAX ? 0 : minDist;
    }
};