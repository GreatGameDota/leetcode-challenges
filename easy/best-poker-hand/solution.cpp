class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        unordered_map<int, int> rank;
        unordered_map<int, int> suit;
        for (int &i : ranks)
            rank[i - 1]++;
        for (char &c : suits)
            suit[c - 'a']++;

        if (suit.size() == 1)
            return "Flush";

        int maxNum = 1;
        for (auto &p : rank)
            maxNum = max(maxNum, p.second);

        if (maxNum == 1)
            return "High Card";
        else if (maxNum == 2)
            return "Pair";
        else
            return "Three of a Kind";
    }
};