#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();    
    while (n--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);

        string countedName;
        int max = 0;

        string word;
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
            // cout << mp[word] << endl;
            if(mp[word] > max){
                max = mp[word];
                countedName = word;
            }
        }
        cout << countedName << " " << max << endl;
    }

    return 0;
}