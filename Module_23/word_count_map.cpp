#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);

    string word;
    while (ss>>word)
    {
        mp[word]++;
    }
    
    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}