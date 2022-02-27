class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int arr[3] = {0};
        for (int &i : nums)
            arr[i]++;
        int num = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            while (arr[num] == 0)
                num++;
            nums[i] = num;
            arr[num]--;
        }
    }
};