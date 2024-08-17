#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // while(n>0){             //O(logN)    //n=11254
    //     int digit = n%10;
    //     cout << digit << endl;
    //     n/=10;
    // }
    
    for (int i = 1; i < n; i=i*2) //O(logN)
    {
        cout << i << " ";
    }
    
    
    
    return 0;
}