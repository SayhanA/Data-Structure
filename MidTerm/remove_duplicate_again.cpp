// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     list<int> myList;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         myList.push_back(val);
//     }
    
//     cout << myList.size() << endl;
//     myList.sort();
//     unique(myList.begin(), myList.end());

//     cout << myList.size() << endl;

//     for(int val:myList){
//         cout << val << " ";
//     }
    
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList;
    int val;
    while (cin >> val && val != -1) {
        myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
