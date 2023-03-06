class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != n) {
                k--;
                if (k == 0)
                    return n;
                i--;
            }
            n++;
        }
        while (--k != 0)
            n++;
        return n;
    }
};