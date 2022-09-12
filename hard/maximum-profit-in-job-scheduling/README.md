
# Maximum Profit in Job Scheduling

## Hard

Date uploaded: 9/11/22

Language: C++

Runtime: 293 ms

Memory Usage: 47.1 mb

Details: The problem is determining the maximum profit gained from doing jobs where two jobs can only be done if they don't overlap. Given a list of start and end times as well as a list of profits my algorithm uses dp to calculate the maximum possible profit gained after each job. My algorithm first sorts all lists based on the endTimes and iterates over each job calculating the profit of that job and whether a previous job doesn't overlap with the current job. My algorithm finds the latest job whose endTime is less than the current job's and combines it with the current job's profit (if a prior job was found) and saves that as the maximum profit unless the previous job's (dp[i - 1]) maximum profit was bigger. This runs in O(nlogn) runtime with O(n) space which is the most optimal algorithm.
