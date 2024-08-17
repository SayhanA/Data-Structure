#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i + 1;
    }

    for (int num : v)
    {
        cout << num << " ";
    }

    if (v.empty())
    {
        cout << endl
             << "empty" << endl;
    }
    else
    {
        cout << endl
             << "Not empty" << endl;
    }

    cout << endl
         << "Vector Capicity:" << v.capacity() << endl;
    cout << "Vector Max_size:" << v.max_size() << endl;

    cout << "\n-------------------------------------------------\n \n";

    cout << "resize\n------\n";
    v.resize(20);
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl
         << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    cout << "\n-------------------------------------------------\n \n";

    cout << "clean\n-----\n";
    v.clear();
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    cout << "\n-------------------------------------------------\n \n";

    cout << "Checking vector is Empty\n------------------------\n";
    if (v.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    cout << "\n-------------------------------------------------\n \n";

    cout << "Resize\n------\n";
    v.resize(n, 100); // First value to resize and Second value to replace;
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\n \n-------------------------------------------------\n \n";

    cout << "Find and Replace\n---- --- -------\n";
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cout << v[i] << " ";
    }

    int replacedValue, replacingValue, findIndex;
    cin >> replacedValue >> replacingValue >> findIndex;

    replace(v.begin(), v.end(), replacedValue, replacingValue);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cout << v[i] << " ";
    }

    cout << endl;

    find(v.begin(), v.end(), findIndex);

    
    return 0;
}