#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return 0;
}

int main() {
    string s = "a+b*(c^d-e)";
    string ans = "";
    stack<char> st;

    for (char c : s) {

        // Operand
        if (isalnum(c)) {
            ans += c;
        }

        // Opening bracket
        else if (c == '(') {
            st.push(c);
        }

        // Closing bracket
        else if (c == ')') {

            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();              // FIX
            }

            st.pop();                  // remove '('
        }

        // Operator
        else {

            while (!st.empty() &&
                   st.top() != '(' &&
                   priority(st.top()) >= priority(c)) {

                ans += st.top();
                st.pop();              // FIX
            }

            st.push(c);
        }
    }

    // Empty the stack
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans;

    return 0;
}