#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    cout << n << " " << k << endl;

    queue<int> line;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        line.push(i);
    }
    
    while (line.size() != 1)
    {
        count++;
        int val = line.front();
        line.pop();
        if(k == count){
            cout << "count val:" << line.front() << endl;
            count = 0;
        }else{
            line.push(val);
        }
        
        // cout << line.front() << endl;
    }
    
    
    
    return 0;
}