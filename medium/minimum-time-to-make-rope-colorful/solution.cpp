class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ret = 0;
        for (int i = 1; i < colors.length(); i++) {
            int sum = neededTime[i - 1];
            int maxVal = sum;
            while (i < colors.length() && colors[i - 1] == colors[i]) {
                sum += neededTime[i];
                maxVal = max(maxVal, neededTime[i]);
                i++;
            }
            ret += sum - maxVal;
        }
        return ret;
    }
};