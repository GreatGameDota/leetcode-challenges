class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max = 0;
        int start = 0;
        int end = height.size() - 1;

        while (start <= end)
        {
            if (height[start] > height[end])
            {
                if (height[end] * (end - start) > max)
                    max = height[end] * (end - start);
                end--;
            }
            else
            {
                if (height[start] * (end - start) > max)
                    max = height[start] * (end - start);
                start++;
            }
        }

        return max;
    }
};