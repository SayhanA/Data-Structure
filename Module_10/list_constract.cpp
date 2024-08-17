#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> list2 = {1, 2, 3, 4, 5, 6, 7};
    // list<int> myList(10, 6);
    // list <int> myList(list2);

    // int a[5] = { 1, 2, 3, 4, 5};
    // list<int> myList(a, a+5);

    vector <int> arr = {2, 3, 4, 5, 6};
    list<int> myList(arr.begin(), arr.end());
    
    cout << sizeof(myList) << endl;
    cout << myList.size() << endl;

    cout << myList.front() << " " << endl;

    // print list using iterator
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for(int val:myList){
        cout << val << " ";
    }
    cout << endl;

    for (auto itr = list2.begin(); itr != list2.end(); itr++)
    {
        cout << *itr << " ";
    }
    
    
    
    return 0;
}