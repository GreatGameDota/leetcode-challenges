class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> prev;
        int curr;
        int idx = 0;
        int sum = 0;

        for (string &st : ops)
        {
            if (st[0] == '-' || isdigit(st[0]))
            {
                if (!prev.empty())
                    curr = prev.back();
                int n = stoi(st);
                prev.push_back(n);
                sum += n;

                if (prev.size() > 3)
                    idx++;
            }
            else if (st[0] == 'C')
            {
                sum -= prev.back();
                prev.pop_back();
                curr = prev[idx];

                if (idx != 0)
                    idx--;
            }
            else if (st[0] == 'D')
            {
                curr = prev.back();
                prev.push_back(2 * curr);
                sum += 2 * curr;

                if (prev.size() > 3)
                    idx++;
            }
            else
            {
                int temp = prev.back();
                prev.push_back(temp + curr);
                sum += curr + temp;
                curr = temp;

                if (prev.size() > 3)
                    idx++;
            }
        }

        return sum;
    }
};