
# Accounts Merge

## Medium

Date uploaded: 9/9/22

Language: C++

Runtime: 95 ms

Memory Usage: 32.8 mb

Details: The problem is merging sets of emails that have an overlap and sorting all the emails. My algorithm creates a disjoint set using the indices of all accounts and iterates over all emails and checks if emails repeat. Emails are then saved in a map to map every email string to the merged set index so that when an email repeats the current set and the set the repeated email is apart of can be merged. Then the algorithm sorts all emails into the proper groups based on the highest parent of each account before converting the groups into the final return array. This runs in O(n * m * logn + nmlog(nm)) runtime, where n is the amount of accounts and m is the amount of emails per account, with O(nm) space which is the most optimal algorithm.
