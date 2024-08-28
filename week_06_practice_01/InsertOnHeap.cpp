#include <bits/stdc++.h>
using namespace std;

void insertOnHeap(vector<int> &v, int n)
{
    while (n--)
    {
        int val;
        cin >> val;
        v.push_back(val);
        int cur_ind = v.size() - 1;

        while (cur_ind != 0)
        {
            int par_ind = (cur_ind - 1) / 2;

            if (v[cur_ind] > v[par_ind])
            {
                swap(v[cur_ind], v[par_ind]);
                cur_ind = par_ind;
            }
            else
                break;
        }
    }
}

void deleteHeap(vector<int> &v){
    v[0] = v[v.size() - 1];
    v.pop_back();

    int currIdx = 0;
    while (true)
    {
        int leftIdx = currIdx*2+1;
        int rightIdx = currIdx*2+2;
        int length = v.size() - 1;

        if(leftIdx <= length && rightIdx < length){
            if(v[leftIdx] > v[rightIdx] && v[leftIdx] > v[currIdx]){
                swap(v[leftIdx], v[currIdx]);
                currIdx = leftIdx;
            }
            else if(v[leftIdx] < v[rightIdx] && v[rightIdx] > v[currIdx]){
                swap(v[rightIdx], v[currIdx]);
                currIdx = rightIdx;
            }
            else break;
        }
        else if(leftIdx <= length){
            if(v[leftIdx] > v[rightIdx] && v[leftIdx] > v[currIdx]){
                swap(v[leftIdx], v[currIdx]);
                currIdx = leftIdx;
            }
            else break;
        }
        else if(rightIdx < length){
            if(v[leftIdx] < v[rightIdx] && v[rightIdx] > v[currIdx]){
                swap(v[rightIdx], v[currIdx]);
                currIdx = rightIdx;
            }
            else break;
        }
        else break;
    }
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    insertOnHeap(v, n);

    for (int val : v)
    {
        cout << val << " ";
    }

    cout << endl;
    deleteHeap(v);
     for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}