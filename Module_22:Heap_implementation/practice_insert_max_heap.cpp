#include <bits/stdc++.h>
using namespace std;

void max_heap(vector<int> &v, int current_index){
    int parent_index = (current_index-1)/2;
    
    if(v[parent_index] < v[current_index]) swap(v[parent_index], v[current_index]);
    current_index = parent_index;

    if(current_index != 0){
        max_heap(v, current_index);
    }
}

int main(){
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};

    int val;
    cin >> val;
    v.push_back(val);

    int current_index = v.size() - 1;

    max_heap(v, current_index);

    for(int val:v){
        cout << val << " ";
    }
    
    return 0;
}