#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<char> chars;
    string input;

    getline(cin, input);

    chars.assign(input.begin(), input.end());

    for (char c : chars) {
        cout << c;
    }
    cout << endl;

    return 0;
}
