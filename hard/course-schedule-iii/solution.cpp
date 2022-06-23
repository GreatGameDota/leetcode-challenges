class Solution
{
public:
    int scheduleCourse(vector<vector<int>> &courses)
    {
        sort(courses.begin(), courses.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });
        priority_queue<int> h;
        int d = 0;
        for (int i = 0; i < courses.size(); i++)
        {
            d += courses[i][0];
            h.push(courses[i][0]);
            if (d > courses[i][1])
            {
                d -= h.top();
                h.pop();
            }
        }
        return h.size();
    }
};