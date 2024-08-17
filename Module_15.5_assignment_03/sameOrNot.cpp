#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool is = true;
    int n, m;
    cin >> n >> m;

    stack<int> st;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st.push(val);
    }

    // Queue
    queue<int> qu;
    int queVal;
    for (int i = 0; i < m; i++)
    {
        cin >> queVal;
        qu.push(queVal);
    }

    if (m == n)
    {
        for(int i = 0; i < n; i++)
        {
            if (st.top() == qu.front())
            {
                st.pop();
                qu.pop();
            }
            else
            {
                is = false;
                break;
            }
        }
    }else{
        is = false;
    }

    is ? cout << "YES\n" : cout << "NO\n";

    return 0;
}