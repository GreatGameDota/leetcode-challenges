class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ret = 1;
        int cnt = 1;
        int maxVal = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == maxVal) {
                cnt++;
                ret = max(ret, cnt);
            } else if (nums[i] > maxVal) {
                ret = 1;
                cnt = 1;
                maxVal = nums[i];
            } else {
                cnt = 0;
            }
        }
        return ret;
    }
};