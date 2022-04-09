class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> res;
        unordered_map<int, int> seen;
        for (int &i : nums)
            seen[i]++;
        for (auto &p : seen)
            if (p.second > nums.size() / 3)
                res.push_back(p.first);
        return res;
    }
};