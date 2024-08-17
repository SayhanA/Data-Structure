#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n, num;
    cin >> n >> num;

    vector<int> v(n, num);

    for (int num:v)
    {
        cout << num << " ";
    }
    
    
    return 0;
}