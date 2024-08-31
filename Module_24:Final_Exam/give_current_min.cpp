#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, x, q, val;
    cin >> n;

    while (n--)
    {
        cin >> val;
        pq.push(val);
    }

    cin >> x;
    while (x--)
    {
        cin >> q;
        if (q == 0)
        {
            cin >> val;
            pq.push(val);
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty\n";
        }
        else if (q == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty\n";
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
