class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> ret;
        if (k == arr.size())
        {
            for (int i = 0; i < k; i++)
                ret.push_back(arr[i]);
            return ret;
        }

        if (x <= arr[0])
        {
            for (int i = 0; i < k; i++)
                ret.push_back(arr[i]);
        }
        else if (x >= arr.back())
        {
            int m = arr.size() - k;
            for (int i = 0; i < k; i++)
            {
                ret.push_back(arr[m]);
                m++;
            }
        }
        else
        {
            int start = 0, end = arr.size() - 1, mid;
            while (start <= end)
            {
                mid = (start + end) / 2;
                if (arr[mid] == x || start == end)
                    break;
                if (arr[mid] > x)
                    end = mid;
                else
                    start = mid + 1;
            }

            int left = mid - 1, right = mid;
            for (int i = 0; i < k; i++)
            {
                int dif1 = INT_MAX, dif2 = INT_MAX;
                if (left >= 0 && left < arr.size())
                    dif1 = abs(x - arr[left]);
                if (right >= 0 && right < arr.size())
                    dif2 = abs(x - arr[right]);

                if (dif1 < dif2)
                {
                    ret.push_back(arr[left]);
                    left--;
                }
                else if (dif2 < dif1)
                {
                    ret.push_back(arr[right]);
                    right++;
                }
                else
                {
                    if (arr[left] > arr[right])
                    {
                        ret.push_back(arr[right]);
                        right++;
                    }
                    else
                    {
                        ret.push_back(arr[left]);
                        left--;
                    }
                }
            }
            sort(ret.begin(), ret.end());
        }

        return ret;
    }
};