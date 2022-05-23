class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        vector<vector<int>> m(26, vector<int>(words.size(), 0));

        int ret = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (char c : words[i])
                m[c - 'a'][i] = 1;

            for (int j = 0; j < i; j++)
            {
                if (words[i].length() * words[j].length() > ret)
                {
                    bool unique = true;
                    for (int k = 0; k < 26; k++)
                        if (m[k][i] && m[k][j])
                        {
                            unique = false;
                            break;
                        }

                    if (unique)
                        ret = words[i].length() * words[j].length();
                }
            }
        }
        return ret;
    }
};