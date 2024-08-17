#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 20, 30, 10, 50, 20};

    // Element access
    cout << *next(myList.begin(), 4) << endl;

    for (int val:myList)
    {
        cout << val << " ";
    }
    
    return 0;
}