class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        stack<int> mono;
        for (int &i : nums2)
        {
            while (!mono.empty() && mono.top() <= i)
            {
                m[mono.top()] = i;
                mono.pop();
            }
            mono.push(i);
        }

        vector<int> res;
        for (int &i : nums1)
        {
            if (m[i])
                res.push_back(m[i]);
            else
                res.push_back(-1);
        }
        return res;
    }
};