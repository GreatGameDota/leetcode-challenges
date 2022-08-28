class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        char types[3] = {'M', 'P', 'G'};
        int ret = 0;
        for (int i = 0; i < 3; i++)
        {
            int truck = 0, totGar = 0, travelTime = 0;
            for (int j = 0; j < garbage.size(); j++)
            {
                int tot = 0;
                for (char &c : garbage[j])
                    if (c == types[i])
                        tot++;

                travelTime += j == 0 ? 0 : travel[j - 1];
                if (tot > 0)
                {
                    truck += tot + travelTime;
                    travelTime = 0;
                }
                totGar += tot;
            }
            ret += totGar > 0 ? truck : 0;
        }
        return ret;
    }
};