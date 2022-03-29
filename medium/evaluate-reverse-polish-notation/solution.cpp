class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ret = 0;
        for (string &st : tokens) {
            if (st.length() > 1 || st[0] - '0' >= 0) {
                int i = stoi(st);
                s.push(i);
            } else {
                int n1 = s.top(); s.pop();
                int n2 = s.top(); s.pop();
                
                switch (st[0]) {
                    case '+':
                        s.push(n2 + n1);
                        break;
                    case '-':
                        s.push(n2 - n1);
                        break;
                    case '*':
                        s.push(n2 * n1);
                        break;
                    case '/':
                        s.push(n2 / n1);
                        break;
                }
            }
        }
        return s.top();
    }
};