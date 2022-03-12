class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> all;
        int n1 = 0, n2 = 0;
        while (n1 < nums1.size() || n2 < nums2.size())
        {
            if (n1 == nums1.size())
            {
                all.push_back(nums2[n2]);
                n2++;
            }
            else if (n2 == nums2.size())
            {
                all.push_back(nums1[n1]);
                n1++;
            }
            else
            {
                if (nums1[n1] <= nums2[n2])
                {
                    all.push_back(nums1[n1]);
                    n1++;
                }
                else
                {
                    all.push_back(nums2[n2]);
                    n2++;
                }
            }
        }

        if (all.size() % 2 == 0)
        {
            return (all[all.size() / 2 - 1] + all[all.size() / 2]) / 2.;
        }
        else
        {
            return all[all.size() / 2];
        }
    }
};