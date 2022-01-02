class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        int count = 0;
        int size = time.size();
        for (int i = 0; i < size; i++)
        {
            time[i] = time[i] % 60;
        }
        map<int, int> amount;
        for (int i = 0; i < size; i++)
        {
            amount[time[i]] = amount[time[i]] + 1;
        }

        int i = 0;
        for (auto pair1 : amount)
        {
            int j = 0;
            for (auto pair2 : amount)
            {
                if (i < j)
                    if ((pair1.first + pair2.first) % 60 == 0)
                    {
                        count += pair1.second * pair2.second;
                    }
                j++;
            }
            i++;

            if (pair1.first == 30)
                for (int i = 0; i < pair1.second; i++)
                {
                    for (int j = 0; j < pair1.second; j++)
                    {
                        if (i < j)
                        {
                            count++;
                        }
                    }
                }
            if (pair1.first == 0)
                for (int i = 0; i < pair1.second; i++)
                {
                    for (int j = 0; j < pair1.second; j++)
                    {
                        if (i < j)
                        {
                            count++;
                        }
                    }
                }
        }
        return count;
    }
};