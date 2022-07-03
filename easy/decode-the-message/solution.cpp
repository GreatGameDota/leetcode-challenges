class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        string stripped = "";
        int seen[26] = {};
        for (char &c : key)
            if (c != ' ' && !seen[c - 'a'])
            {
                stripped += c;
                seen[c - 'a'] = 1;
            }

        for (int i = 0; i < message.length(); i++)
            if (message[i] != ' ')
                for (int j = 0; j < stripped.length(); j++)
                    if (stripped[j] == message[i])
                    {
                        message[i] = j + 'a';
                        break;
                    }
        return message;
    }
};