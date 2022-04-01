class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int offset1 = 0, offset2 = 0;
        int idx1 = 0, idx2 = 0;
        while ((idx1 + offset1) < version1.length() || (idx2 + offset2) < version2.length())
        {
            while ((idx1 + offset1) < version1.length() && version1[idx1 + offset1] != '.')
                idx1++;
            while ((idx2 + offset2) < version2.length() && version2[idx2 + offset2] != '.')
                idx2++;

            int num1 = 0;
            if (idx1 != 0)
                num1 = stoi(version1.substr(offset1, idx1));
            int num2 = 0;
            if (idx2 != 0)
                num2 = stoi(version2.substr(offset2, idx2));

            if (num1 > num2)
                return 1;
            else if (num2 > num1)
                return -1;

            offset1 += idx1 + 1, offset2 += idx2 + 1;
            idx1 = 0, idx2 = 0;
        }
        return 0;
    }
};