class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &a)
    {
        stack<int> s;
        s.push(a[0]);
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] > 0)
                s.push(a[i]);
            else
            {
                while (!s.empty() && -a[i] > s.top() && s.top() > 0)
                    s.pop();

                if (!s.empty() && s.top() == -a[i])
                {
                    s.pop();
                    continue;
                }

                if (s.empty() || s.top() < 0)
                    s.push(a[i]);
            }
        }

        vector<int> res(s.size(), 0);
        for (int i = s.size() - 1; i >= 0; i--)
        {
            res[i] = s.top();
            s.pop();
        }
        return res;
    }
};