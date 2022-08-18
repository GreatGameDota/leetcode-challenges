class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        for (int &i : arr)
            freq[i]++;

        priority_queue<int> q;
        for (auto &p : freq)
            q.push(p.second);

        int curr = 0;
        int ret = 0;
        while (curr < arr.size() / 2)
        {
            curr += q.top();
            q.pop();
            ret++;
        }
        return ret;
    }
};