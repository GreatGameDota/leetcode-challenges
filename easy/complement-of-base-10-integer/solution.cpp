class Solution {
public:
    int bitwiseComplement(int n) {
        string bin = "";
        if (n == 0) bin = "0";

        while (n != 0) {
            int re = n % 2;
            n = n / 2;
            bin = to_string(re) + bin;
        }
        
        string ret = "";
        for (char c : bin) {
            ret += c == '0' ? '1' : '0';
        }
        
        int count = 0;
        for (int i = 0; i < ret.length(); i++) {
            if (ret[i] == '0') {
                count *= 2;
            } else if (ret[i] == '1') {
                count *= 2;
                count++;
            }
        }
        
        return count;
    }
};