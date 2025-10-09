#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int apply(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b; 
    return 0;
}

vector<string> infixToPostfix(string expr) {
    vector<string> output;
    stack<char> ops;
    int i = 0;

    while (i < expr.length()) {
        if (isspace(expr[i])) {
            i++;
            continue;
        }

        if (isdigit(expr[i])) {
            string num;
            while (i < expr.length() && isdigit(expr[i])) {
                num += expr[i++];
            }
            output.push_back(num);
        }
        else if (expr[i] == '(') {
            ops.push(expr[i++]);
        }
        else if (expr[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                output.push_back(string(1, ops.top()));
                ops.pop();
            }
            ops.pop();
            i++;
        }
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expr[i])) {
                output.push_back(string(1, ops.top()));
                ops.pop();
            }
            ops.push(expr[i++]);
        }
    }

    while (!ops.empty()) {
        output.push_back(string(1, ops.top()));
        ops.pop();
    }

    return output;
}

int evaluatePostfix(const vector<string>& postfix) {
    stack<int> st;
    for (auto token : postfix) {
        if (isdigit(token[0])) {
            st.push(stoi(token));
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(apply(a, b, token[0]));
        }
    }
    return st.top();
}

int main() {
    string expression;
    cout << "Enter arithmetic expression: ";
    getline(cin, expression);

    vector<string> postfix = infixToPostfix(expression);

    cout << "Postfix: ";
    for (auto tok : postfix) cout << tok << ' ';
    cout << '\n';

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
