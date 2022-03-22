class Solution {
public:
    string getSmallestString(int n, int k) {
        string str(n, 'a');
        for (int i = n; i >= 1; i--) {
            if (k - 26 >= i) {
                str[i - 1] = 'z';
                k -= 26;
            } else if (k == i) {
                break;
            } else {
                str[i - 1] = (char)(k - i + 'a');
                k -= (k - i + 1);
            }
        }
        return str;
    }
};