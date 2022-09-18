class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        map<int, int> m;
        for (int &i : changed)
            m[i]++;

        vector<int> ret;
        for (auto &i : m)
            while (i.second-- > 0)
                if (m.count(i.first * 2) && m[i.first * 2]-- > 0)
                    ret.push_back(i.first);
                else
                    return {};
        return ret;
    }
};