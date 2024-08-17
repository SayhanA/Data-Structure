#include <bits/stdc++.h>
using namespace std;

// int fun(int arr[5], int start, int end){
//     for (int i = 0; i < i; i++)
//     {
//         cout << &arr[i] << " ";
//     }

//     return 0;
// }

// void value(int testCase, int arr[5])
// {
//     int start, end;
//     cin >> start >> end;
//     // cout << start << " " << end << endl;

//     int sum = 0;
//     for (int i = start - 1; i <= end - 1; i++)
//     {
//         sum += arr[i];
//     }
//     cout << sum << endl;

//     if (testCase > 1)
//     {
//         value(testCase - 1, arr);
//     }
// }

int main()
{
    int n, testCase, start, end;
    cin >> n >> testCase;

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = sum + num;
        sum = arr[i];

        // cout << arr[i] << " ";
    }
    while (cin >> start >> end)
    {
        if (start - 1 <= 0)
        {
            cout << arr[end - 1] << endl;
        }
        else
        {
            cout << arr[end - 1] - arr[start - 2] << endl;
        }
    }

    // int startPosition, endPosition;
    // for (int j = 0; j < testCase; j++)
    // {
    //     cin >> startPosition >> endPosition;
    //     int sum = 0;
    //     for (int i = startPosition - 1; i <= endPosition - 1; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout << sum << endl;
    // }

    // while (cin >> startPosition && cin >> endPosition)
    // {
    //     int sum = 0;
    //     for (int i = startPosition - 1; i <= endPosition - 1; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout << sum << endl;
    // }
    // value(testCase, arr);

    // while (cin >> startPosition && cin >> endPosition)
    // {
    //     int sum = 0;
    //     for (int i = startPosition - 1; i <= endPosition - 1; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout << sum << endl;
    // }

    return 0;
}