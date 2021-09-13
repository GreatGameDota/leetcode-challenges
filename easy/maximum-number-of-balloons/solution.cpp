class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> map = {{'b', 0}, {'a', 0}, {'l', 0}, {'o', 0}, {'n', 0}};

        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
                map[text[i]]++;
        }

        int minNum = map.begin()->second;
        for (auto itr = map.begin(); itr != map.end(); ++itr)
        {
            minNum = min(itr->second, minNum);
        }
        int minNum2 = min(map['l'] / 2, map['o'] / 2);

        if (map['l'] >= minNum * 2 && map['o'] >= minNum * 2)
            return minNum;
        else if (minNum > minNum2)
            return minNum2;
        else
            return 0;
    }
};