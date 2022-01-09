class Solution
{
public:
    bool isRobotBounded(string instructions)
    {
        int dir = 0;
        int dist_X = 0;
        int dist_Y = 0;
        for (char c : instructions)
        {
            if (c == 'G')
            {
                if (dir == 0)
                    dist_Y++;
                else if (abs(dir) == 180)
                    dist_Y--;
                else if (abs(dir) == 90)
                    dist_X++;
                else
                    dist_X--;
            }
            else if (c == 'L')
                dir = (dir - 90) % 360;
            else
                dir = (dir + 90) % 360;
        }
        if ((dist_X == 0 && dist_Y == 0) || dir != 0)
            return true;
        return false;
    }
};