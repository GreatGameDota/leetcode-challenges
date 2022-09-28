class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));
        
        int ret = 0;
        int j = 0;
        for (int i = 0; i < players.size(); i++) {
            while (j < trainers.size() && trainers[j] < players[i]) {j++;}
            if (j == trainers.size())
                return ret;
            ret++;
            j++;
        }
        
        return ret;
    }
};