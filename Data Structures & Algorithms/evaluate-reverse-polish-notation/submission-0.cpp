class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int(int, int)>> operations = {
            {"+", [](int a, int b) { return a + b; }},
            {"-", [](int a, int b) { return a - b; }},
            {"*", [](int a, int b) { return a * b; }},
            {"/", [](int a, int b) { return a / b; }}
        };

        stack<int> stk;
        for (const string& token : tokens) {
            if (operations.count(token)) {
                int b = stk.top(); stk.pop();
                int a = stk.top(); stk.pop();
                stk.push(operations[token](a, b));
            } else {
                stk.push(stoi(token));
            }
        }

        return stk.top();
    }
};
