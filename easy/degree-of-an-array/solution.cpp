class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        int maxNum = INT_MIN, minSz = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            maxNum = max(maxNum, freq[nums[i]]);
            if (!first.count(nums[i]))
                first[nums[i]] = i;
            last[nums[i]] = max(last[nums[i]], i);
        }
        
        for (auto &p : freq)
            if (p.second == maxNum)
                minSz = min(minSz, last[p.first] - first[p.first] + 1);
        
        return minSz;
    }
};