class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int num = 0;
        if (nums2.size() % 2 == 1)
            for (int &i : nums1)
                num ^= i;
        if (nums1.size() % 2 == 1)
            for (int &i : nums2)
                num ^= i;
        return num;
    }
};