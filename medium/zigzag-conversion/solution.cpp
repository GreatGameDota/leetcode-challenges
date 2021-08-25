class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<string> arr;
        string finalStr = "";

        if (numRows > 1)
        {
            for (int i = 0; i < numRows; i++)
                arr.push_back("");

            bool up = false;
            int zags = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (up)
                {
                    arr[numRows - (i - ((numRows - 2) * zags)) % numRows] += s[i];
                    if ((i + 1) % (numRows + numRows - 2) == 0)
                    {
                        up = false;
                    }
                }
                else
                {
                    arr[(i - ((numRows - 2) * zags)) % numRows] += s[i];

                    if ((i + 1) % (numRows + numRows - 2) == numRows)
                    {
                        up = true;
                        zags++;
                    }
                }
            }

            for (int i = 0; i < numRows; i++)
            {
                finalStr += arr[i];
            }
        }
        else
            finalStr = s;

        return finalStr;
    }
};