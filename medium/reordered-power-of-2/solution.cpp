class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int m[10] = {};
        int sz = log10(n)+1;
        while (n) {
            m[n % 10]++;
            n /= 10;
        }
        
        int start = 1;
        while ((int)log10(start)+1 < sz)
            start *= 2;
        
        while ((int)log10(start)+1 == sz) {
            int val = start;
            int m2[10] = {};
            while (val) {
                m2[val % 10]++;
                val /= 10;
            }
            
            if (equal(begin(m), end(m), begin(m2)))
                return true;
            start *= 2;
        }
        
        return false;
    }
};