#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, testCase;
    cin >> n >> testCase;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < testCase; i++)
    {
        int count = 0;
        int startIndex = 0, endIndex = n - 1, middle, test;
        cin >> test;
        while (startIndex <= endIndex)
        {
            middle = (startIndex + endIndex) / 2;

            if (test == arr[middle])
            {
                count = 1;
                break;
            }
            else if (test < arr[middle])
            {
                endIndex = middle - 1;
            }
            else
            {
                startIndex = middle + 1;
            }
        }
        if (count)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "notFound";
        }
        // cout << "notFound";
    }

    return 0;
}