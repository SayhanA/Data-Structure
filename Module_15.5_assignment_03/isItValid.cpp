// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     queue<int> q;

//     char val;
//     while (cin >> val)
//     {
//         q.push(val);
//     }

//     // for (int i = 0; i < q.size(); i++)
//     // {
//     //     int a = q.front();
//     //     q.pop();
//     //     if(q.front() == a-1 || a == q.front()-1){
//     //         cout << "YES\n";
//     //         q.pop();
//     //     }else{
//     //         q.push(a);
//     //     }
//     // }
//     while (q.size() >= 1)
//     {
//         int a = q.front();
//         q.pop();
//         if (!q.empty())
//         {
//             if (q.front() == a - 1 || a == q.front() - 1)
//             {
//                 q.pop();
//             }
//             else
//             {
//                 q.push(a);
//             }
//         }else{
//             q.push(a);
//             break;
//         }
//     }

//     q.size() ? cout << "NO\n" : cout << "YES\n";

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     queue<int> q;

//     int val;
//     while (cin >> val)
//     {
//         q.push(val);
//     }

//     while (q.size() > 1)
//     {
//         int a = q.front();
//         q.pop();
//         if (q.front() == a - 1 || a == q.front() - 1)
//         {
//             q.pop();
//         }
//         else
//         {
//             q.push(a);
//         }
//     }

//     q.size() == 1 ? cout << "NO\n" : cout << "YES\n";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str){
    queue<char> q;
    
    for(char n:str){
        if(!q.empty() && ((n == '0' && q.front() == '1') || (n == '1' && q.front() == '0'))){
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