class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cW = 0, cB = 0, ret = blocks.size();
        for (int i = 0; i < blocks.size(); i++) {
            if (i >= k) {
                ret = min(ret, cW);
                
                if (blocks[i - k] == 'W')
                    cW--;
                else
                    cB--;
            }
            
            if (blocks[i] == 'W')
                cW++;
            else
                cB++;
        }
        ret = min(ret, cW);
        return ret;
    }
};