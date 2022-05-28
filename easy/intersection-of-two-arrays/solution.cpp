class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        for (int &i : nums1)
            if (!m[i])
                m[i]++;

        vector<int> ret;
        for (int &i : nums2)
            if (m[i])
            {
                ret.push_back(i);
                m[i] = 0;
            }
        return ret;
    }
};