class Solution
{
public:
    string addBinary(string a, string b)
    {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string rem = "";
        string ret = "";
        int i;
        for (i = 0; i < min(a.length(), b.length()); i++)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                if (rem == "1")
                {
                    ret = "1" + ret;
                }
                else
                {
                    rem = "1";
                    ret = "0" + ret;
                }
            }
            else if (a[i] == '1')
            {
                if (rem == "")
                    ret = "1" + ret;
                else
                    ret = "0" + ret;
            }
            else if (b[i] == '1')
            {
                if (rem == "")
                    ret = "1" + ret;
                else
                    ret = "0" + ret;
            }
            else
            {
                if (rem == "")
                    ret = "0" + ret;
                else
                    ret = rem + ret;
                rem = "";
            }
        }

        if (b.length() > a.length())
        {
            while (i < b.length())
            {
                if (b[i] == '0' && rem != "")
                {
                    ret = "1" + ret;
                    rem = "";
                }
                else if (b[i] == '1' && rem != "")
                {
                    ret = "0" + ret;
                }
                else
                {
                    ret = b[i] + ret;
                }
                i++;
            }
        }
        else if (b.length() < a.length())
        {
            while (i < a.length())
            {
                if (a[i] == '0' && rem != "")
                {
                    ret = "1" + ret;
                    rem = "";
                }
                else if (a[i] == '1' && rem != "")
                {
                    ret = "0" + ret;
                }
                else
                {
                    ret = a[i] + ret;
                }
                i++;
            }
        }
        if (rem != "")
        {
            ret = "1" + ret;
        }
        return ret;
    }
};