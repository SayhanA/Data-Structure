#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        set<int> s;
        int n, val;
        cin >> n;

        while (n--)
        {
            cin >> val;
            s.insert(val);
        }

        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}