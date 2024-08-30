#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    int n, val;
    cin >> n;
    
    while (--n) 
    {
        cin >> val;
        s.insert(val);
    }

    for(auto it:s){
        cout << it << endl;
    }

    // another way of pring values
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    if(s.count(7)) cout << "Yes\n";
    else cout << "No\n";
    
    return 0;
}