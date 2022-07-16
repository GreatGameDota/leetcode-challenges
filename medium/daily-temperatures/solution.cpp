class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &t)
    {
        stack<int> mono;
        vector<int> ret(t.size(), 0);
        for (int i = 0; i < t.size(); i++)
        {
            while (!mono.empty() && t[mono.top()] < t[i])
            {
                ret[mono.top()] = i - mono.top();
                mono.pop();
            }
            mono.push(i);
        }
        return ret;
    }
};