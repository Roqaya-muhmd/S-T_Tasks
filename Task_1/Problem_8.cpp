#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s;
    int caseNum = 1;

    while (cin >> s) {
        if (s[0] == '-') break;

        stack<char> st;
        int opra = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '}' && !st.empty()) {
                char ch = st.top();
                st.pop();
                if (ch != '{') {
                    opra++;
                }
            }
            else if (s[i] == '}' && st.empty()) {
                opra++;
                st.push('{');
            }
            else {
                st.push(s[i]);
            }
        }

        // Add half of remaining stack size to operations
        opra += st.size() / 2;

        cout << caseNum << ". " << opra << endl;
        caseNum++;
    }

    return 0;
}
