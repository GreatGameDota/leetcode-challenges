class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int start = 0, end = letters.size() - 1, mid;

        while (start <= end)
        {
            mid = (start + end) / 2;
            if (letters[mid] < target)
                start = mid + 1;
            else if (letters[mid] > target)
                end = mid - 1;
            else
            {
                while (mid != letters.size())
                {
                    if (letters[mid] > target)
                        return letters[mid];
                    mid++;
                }
                return letters[0];
            }
        }

        while (mid != letters.size())
        {
            if (letters[mid] > target)
                return letters[mid];
            mid++;
        }
        return letters[0];
    }
};