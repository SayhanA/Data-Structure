#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i][0]= arr[i][0]-32;
        cout << arr[i] << endl;
    }
    
    
    return 0;
}