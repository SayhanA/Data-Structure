#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cin >> target;

    vector<int>:: iterator it;

    it = find(arr.begin(), arr.end(), target);
    if(it != arr.end()){
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == target){
                cout << i << endl;
                return 0;
            }
        }
        
    }
    else{
        cout << "Element Not Found \n";
    }
    
    return 0;
}