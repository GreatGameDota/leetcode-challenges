class Solution
{
public:
    int maxArea(int h, int w, vector<int> &hori, vector<int> &vert)
    {
        int MOD = 1e9 + 7;
        hori.push_back(0);
        hori.push_back(h);
        vert.push_back(0);
        vert.push_back(w);
        sort(hori.begin(), hori.end());
        sort(vert.begin(), vert.end());

        int maxDiff1 = 0;
        for (int i = 1; i < hori.size(); i++)
            maxDiff1 = max(maxDiff1, hori[i] - hori[i - 1]);

        int maxDiff2 = 0;
        for (int i = 1; i < vert.size(); i++)
            maxDiff2 = max(maxDiff2, vert[i] - vert[i - 1]);

        return ((long)maxDiff1 * maxDiff2) % MOD;
    }
};