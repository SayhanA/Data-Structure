// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     while (cin >> n && n != -1)
//     {
//         cout << n << " ";
//     }
    
//     cout << "main function is closed";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    cout << "Enter integers in one line, separated by spaces:" << endl;
    getline(cin, line);
    
    stringstream ss(line);
    int n;
    while (ss >> n) {
        cout << n << " ";
    }

    cout << endl << "main function is closed" << endl;
    return 0;
}
