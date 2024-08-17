#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList;
    int val;
    while (cin >> val && val != -1)
    {
        myList.push_back(val);
    }

    list<int>myList2(myList);
    myList2.reverse();
    
    myList == myList2 ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}