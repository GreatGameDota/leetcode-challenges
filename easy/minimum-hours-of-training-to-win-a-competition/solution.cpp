class Solution
{
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
    {
        int sum = accumulate(energy.begin(), energy.end(), 0);
        int ret = max(0, sum - initialEnergy + 1);

        for (int i = 0; i < experience.size(); i++)
        {
            if (initialExperience <= experience[i])
            {
                ret += experience[i] - initialExperience + 1;
                initialExperience += experience[i] - initialExperience + 1;
            }
            initialExperience += experience[i];
        }

        return ret;
    }
};