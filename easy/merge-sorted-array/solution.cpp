class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        queue<int> s;
        int start1 = 0, start2 = 0;
        int idx = 0;
        while (start1 < m || start2 < n)
        {
            if (start1 == m)
            {
                nums1[idx] = nums2[start2++];
            }
            else if (start2 == n)
            {
                if (!s.empty())
                {
                    if (idx < m)
                        s.push(nums1[idx]);
                    nums1[idx] = s.front();
                    s.pop();
                }
                else
                    return;
            }
            else
            {
                if (!s.empty() && s.front() > nums2[start2])
                {
                    if (idx < m)
                        s.push(nums1[idx]);
                    nums1[idx] = nums2[start2++];
                }
                else
                {
                    if (nums1[start1] > nums2[start2])
                    {
                        if (idx < m)
                            s.push(nums1[idx]);
                        nums1[idx] = nums2[start2++];
                    }
                    else
                    {
                        if (!s.empty())
                        {
                            if (idx < m)
                                s.push(nums1[idx]);
                            nums1[idx] = s.front();
                            s.pop();
                        }
                        start1++;
                    }
                }
            }
            idx++;
        }
    }
};