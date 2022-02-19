class Solution
{
    class MyComparator
    {
    public:
        bool operator()(pair<int, int> &p1, pair<int, int> &p2)
        {
            return p1.second < p2.second;
        }
    };

public:
    string reorganizeString(string s)
    {
        unordered_map<int, int> count;
        for (char &c : s)
            count[c]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, MyComparator> heap;
        for (auto &p : count)
            heap.push(pair<int, int>(p.first, p.second));

        vector<pair<int, int>> li;
        while (!heap.empty())
        {
            pair<int, int> p = heap.top();
            li.push_back(p);
            heap.pop();
        }

        string ret = "";
        while (li.size() != 0)
        {
            int max = 0;
            int idx = -1;
            for (int i = 0; i < li.size(); i++)
            {
                if (li[i].second > max && ret.back() != li[i].first)
                {
                    max = li[i].second;
                    idx = i;
                }
            }
            if (idx == -1)
                return "";

            ret += li[idx].first;
            li[idx].second--;
            if (li[idx].second == 0)
                li.erase(li.begin() + idx);
        }

        return ret;
    }
};