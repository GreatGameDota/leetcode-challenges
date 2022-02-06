class Solution
{
public:
    class Point
    {
    public:
        int x;
        int y;
        double dist;

        Point(int _x, int _y) : x{_x}, y{_y}
        {
            dist = sqrt(((_y - 0) * (_y - 0)) + ((_x - 0) * (_x - 0)));
        };
    };

    class myComparator
    {
    public:
        int operator()(const Point &p1, const Point &p2)
        {
            return p1.dist > p2.dist;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        priority_queue<Point, vector<Point>, myComparator> minHeap;
        for (int i = 0; i < points.size(); i++)
            minHeap.push(Point(points[i][0], points[i][1]));

        vector<vector<int>> ret;
        for (int i = 0; i < k; i++)
        {
            Point p = minHeap.top();
            minHeap.pop();
            ret.push_back(vector<int>{p.x, p.y});
        }

        return ret;
    }
};