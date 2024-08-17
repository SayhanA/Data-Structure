#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i+1;
    }
    
    for (int num:v)
    {
        cout << num << " ";
    }
    
    
    return 0;
}