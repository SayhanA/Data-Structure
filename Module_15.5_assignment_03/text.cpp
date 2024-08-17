#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string &s) {
    queue<char> q;

    for (char c : s) {
        if (!q.empty() && ((c == '1' && q.front() == '0') || (c == '0' && q.front() == '1'))) {
            q.pop();
        } else {
            q.push(c);
        }
    }

    return q.empty();
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        string s;
        cin >> s;
        if (isValidString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
