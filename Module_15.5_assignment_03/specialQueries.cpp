#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> s;
    int n;
    cin >> n;
    int opt;
    while (n--)
    {
        cin >> opt;
        if (opt == 0)
        {
            string name;
            cin >> name;
            s.push(name);
        }
        else if (opt == 1 && !s.empty())
        {
            cout << s.front() << endl;
            s.pop();
        }
        else
        {
            cout << "Invalid\n";
        }
    }

    return 0;
}