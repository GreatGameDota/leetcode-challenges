class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid = (start + end) / 2;
        
        int minMid = nums[mid];
        while (start <= end) {
            mid = (start + end) / 2;
            minMid = min(nums[mid], minMid);
            
            if (nums[mid] >= nums[start] && nums.back() < nums[start]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return minMid;
    }
};