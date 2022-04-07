class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int, vector<int>, less<>> h;
        for (int &i : stones)
            h.push(i);

        while (h.size() > 1)
        {
            int n1 = h.top();
            h.pop();
            int n2 = h.top();
            h.pop();

            if (n1 != n2)
                h.push((max(n1, n2) - min(n1, n2)));
        }

        if (h.empty())
            return 0;
        return h.top();
    }
};