class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int bits2 = __builtin_popcount(num2);
        int diff = bits2 - __builtin_popcount(num1);
        
        int sz = 0;
        while (num2 != 0) {
            sz++;
            num2 /= 2;
        }
        
        string num = "";
        while (num1 != 0) {
            num = (num1 & 1 ? "1" : "0") + num;
            num1 /= 2;
        }
        while (num.length() < sz)
            num = "0" + num;
        
        if (diff > 0) {
            for (int i = num.length() - 1; i >= 0; i--) {
                if (num[i] == '0') {
                    num[i] = '1';
                    diff--;
                }
                if (diff == 0)
                    break;
            }
            while (diff != 0) {
                num = "1" + num;
                diff--;
            }
        } else if (diff < 0) {
            for (int i = num.length() - 1; i >= 0; i--) {
                if (num[i] == '1') {
                    num[i] = '0';
                    diff++;
                }
                if (diff == 0)
                    break;
            }
            while (diff != 0) {
                num = "0" + num;
                diff++;
            }
        }
        
        num1 = 0;
        for (int i = num.length() - 1; i >= 0; i--)
            num1 += num[i] == '1' ? pow(2, num.length() - i - 1) : 0;
        return num1;
    }
};