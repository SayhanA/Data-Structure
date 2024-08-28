#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> v, int n){
    v.push_back(v);
}

int main(){
    int n;
    cin >> n;

    vector<int> v;
    
    insert(v, n);
    
    return 0;
}