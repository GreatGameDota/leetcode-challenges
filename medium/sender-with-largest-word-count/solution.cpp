class Solution
{
public:
    string largestWordCount(vector<string> &messages, vector<string> &senders)
    {
        unordered_map<string, int> users;
        int maxNum = INT_MIN;
        string user;
        for (int i = 0; i < messages.size(); i++)
        {
            users[senders[i]] += 1 + count(messages[i].begin(), messages[i].end(), ' ');
            if (users[senders[i]] > maxNum)
            {
                maxNum = users[senders[i]];
                user = senders[i];
            }
            else if (users[senders[i]] == maxNum)
            {
                user = max(user, senders[i]);
            }
        }
        return user;
    }
};