#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q, s, e;
    cin >> n >> q;

    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long num;
        cin >> num;
        arr[i] = sum + num;
        sum = arr[i];
    }
    while (cin >> s >> e)
    {
        // cout << s << " " << e << endl;
        if (s - 1 <= 0)
        {
            cout << arr[e - 1] << endl;
        }
        else
        {
            cout << arr[e - 1] - arr[s - 2] << endl;
        }
    }

    return 0;
}