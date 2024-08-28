#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int current_index = (v.size() - 1) / 2;

    while (current_index)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] < v[current_index])
            swap(v[parent_index], v[current_index]);
        else
            break;
        current_index = parent_index;
    }
}

// void delete_heap(vector<int> &v)
// {
//     v[0] = v[v.size() - 1];
//     v.pop_back();

//     int current_index = 0;

//     while (true)
//     {
//         int left_index = current_index * 2 + 1;
//         int right_index = current_index * 2 + 2;
//         int last_index = v.size() - 1;
//         cout << "call\n";

//         if (left_index <= last_index && right_index <= last_index)
//         {
//             // both are available

//             // check left
//             if (v[left_index] >= v[right_index] && v[left_index] > v[current_index])
//             {
//                 swap(v[left_index], v[current_index]);
//                 current_index = left_index;
//                 cout << "left boro\n";
//             }

//             // check right
//             else if (v[left_index] <= v[right_index] && v[right_index] > v[current_index])
//             {
//                 swap(v[right_index], v[current_index]);
//                 current_index = right_index;
//             }

//             else
//                 break;
//         }

//         else if (left_index <= last_index)
//         {
//             // left value available
//             if (v[left_index] > v[current_index])
//             {
//                 swap(v[left_index], v[current_index]);
//                 current_index = left_index;
//             }
//             else
//                 break;
//         }

//         else if (right_index <= last_index)
//         {
//             // right value available
//             if (v[right_index] > v[current_index])
//             {
//                 swap(v[right_index], v[current_index]);
//                 current_index = right_index;
//             }
//             else
//                 break;
//         }
//     }
// }

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ache
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ase
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ase
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    delete_heap(v);
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}