class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;

        for (vector<int> &op : operations)
        {
            nums[m[op[0]]] = op[1];
            m[op[1]] = m[op[0]];
        }

        return nums;
    }
};