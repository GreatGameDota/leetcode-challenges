class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        
        priority_queue<int, vector<int>, greater<>> heap;
        heap.push(intervals[0][1]);
        
        for (int i = 1; i < intervals.size(); i++) {
            if (heap.top() < intervals[i][0])
                heap.pop();
            heap.push(intervals[i][1]);
        }
        return heap.size();
    }
};