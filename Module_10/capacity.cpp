#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.max_size() << endl;

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    // clear
    myList.clear();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}