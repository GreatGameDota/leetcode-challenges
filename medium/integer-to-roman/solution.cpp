class Solution
{
public:
    string intToRoman(int num)
    {
        string ret = "";

        string number = to_string(num);
        vector<int> sub;
        for (int i = 0; i < number.length(); i++)
        {
            sub.push_back((number[i] - 48) * pow(10, number.length() - i - 1));
        }

        unordered_map<int, string> map;
        map[1] = "I";
        map[5] = "V";
        map[10] = "X";
        map[50] = "L";
        map[100] = "C";
        map[500] = "D";
        map[1000] = "M";

        vector<int> n = {1000, 500, 100, 50, 10, 5, 1};

        for (int &num : sub)
        {
            while (num != 0)
            {
                int minus1 = 0;
                int minus2 = 0;
                int single = 0;
                for (int &nu : n)
                {
                    for (int &nu2 : n)
                    {
                        if (nu != nu2 && nu - nu2 <= num)
                        {
                            if (nu - nu2 > minus1 - minus2)
                            {
                                minus1 = nu;
                                minus2 = nu2;
                            }
                        }
                    }

                    if (num >= nu)
                    {
                        if (nu > single)
                            single = nu;
                    }
                }

                if (minus1 - minus2 > single)
                {
                    ret += map[minus2] + map[minus1];
                    num -= (minus1 - minus2);
                }
                else
                {
                    ret += map[single];
                    num -= single;
                }
            }
        }

        return ret;
    }
};