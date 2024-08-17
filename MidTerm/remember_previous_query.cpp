#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int n;
    cin >> n;
    while (n--)
    {
        int opt, val;
        cin >> opt >> val;
        if (opt == 0)
        {
            myList.push_front(val);
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;

            list<int> list2 = myList;
            list2.reverse();
            cout << "R -> ";
            for (int val : list2)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else if (opt == 1)
        {
            // cout << "Option 1 " << val << endl;
            myList.push_back(val);
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;

            list<int> list2 = myList;
            list2.reverse();
            cout << "R -> ";
            for (int val : list2)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else if (opt == 2)
        {
            // list<int>::iterator itr = myList.begin();
            // cout << "Option 2 " << val << endl;
            // myList.erase(itr);
            if (myList.size() <= val)
            {
            }
            else
            {
                list<int>::iterator itr = myList.begin();
                while (val--)
                {
                    itr++;
                }
                
                myList.erase(itr);
            }
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;

            list<int> list2 = myList;
            list2.reverse();
            cout << "R -> ";
            for (int val : list2)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Unvalid Option\n";
        }
    }

    return 0;
}