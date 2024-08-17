#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    
    arr1.insert(arr1.begin(), arr2.begin(), arr2.end());

    for (int num:arr1)
    {
        cout << num << " ";
    }
    
    
    return 0;
}