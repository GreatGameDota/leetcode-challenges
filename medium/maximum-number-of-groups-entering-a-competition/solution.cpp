class Solution
{
public:
    int maximumGroups(vector<int> &grades)
    {
        if (grades.size() < 3)
            return 1;

        sort(grades.begin(), grades.end());

        int prev = grades[0], curr = 0;
        int tot = 1;
        int sz = 2, cnt = 0;
        for (int i = 1; i < grades.size(); i++)
        {
            cnt++;
            curr += grades[i];
            if (cnt == sz)
            {
                if (curr > prev)
                {
                    prev = curr;
                    curr = 0;
                    sz++;
                    tot++;
                    cnt = 0;
                }
            }
        }

        return tot;
    }
};