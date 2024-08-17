#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;
    
    int test;
    cin >> test;

    cout << test << " " << arr[n/2];
    if(test > arr[n/2]){
    }
    
    return 0;
}