#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    mp.insert({"Raking", 79});
    mp.insert({"Akib", 0});
    mp.insert({"Jobbar", 91});

    mp["Khalid"] = 56;
    mp["Akond"] = 88;

    for(auto i:mp){
        cout << i.first << " " << i.second << endl;
    }

    cout << mp["Akib"] << endl;
    // cout << mp["akib"] << endl;

    if(mp.count("Akib")) cout << "ASA\n";
    else cout << "Nai\n";

    if(mp.count("akib")) cout << "ASA\n";
    else cout << "NAI\n";

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    
    
    return 0;
}