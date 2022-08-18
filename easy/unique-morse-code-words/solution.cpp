class Solution {
public:
    string mapping[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> set;
        for (string &s : words) {
            string str = "";
            for (char &c : s)
                str += mapping[c - 'a'];
            set.insert(str);
        }
        return set.size();
    }
};