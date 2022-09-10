class Solution
{
public:
    int rep[1000]; // idx -> representative
    int size[1000];
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        unordered_map<string, int> seen; // email -> representative

        for (int i = 0; i < accounts.size(); i++)
        {
            rep[i] = i;
            size[i] = 1;
            for (int j = 1; j < accounts[i].size(); j++)
            {
                if (seen.count(accounts[i][j]))
                    combine(seen[accounts[i][j]], i);
                else
                    seen[accounts[i][j]] = i;
            }
        }

        unordered_map<int, vector<string>> m2; // representative -> sorted email
        for (auto &p : seen)
            m2[find(p.second)].push_back(p.first);

        vector<vector<string>> ret;
        for (auto &p : m2)
        {
            ret.push_back({accounts[p.first][0]});
            sort(begin(p.second), end(p.second));
            for (auto &v : p.second)
                ret.back().push_back(v);
        }

        return ret;
    }

    int find(int u)
    {
        if (u == rep[u])
            return u;
        else
            return rep[u] = find(rep[u]);
    }

    void combine(int u, int v)
    {
        u = find(u);
        v = find(v);

        if (u != v)
        {
            if (size[u] > size[v])
            {
                rep[v] = u;
                size[u] += size[v];
            }
            else
            {
                rep[u] = v;
                size[v] += size[u];
            }
        }
    }
};