#include <bits/stdc++.h>
using namespace std;

bool isValid(string str){
    queue<char> q;
    
    for(char n:str){
        if(!q.empty() && (n == '1' && q.front() == '0')){
            q.pop();
        }else{
            q.push(n);
        }
    }
    return q.empty();
}

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << (isValid(s) ? "YES\n" : "NO\n");
    }
    
    return 0;
}