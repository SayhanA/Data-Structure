#include <bits/stdc++.h>
using namespace std;

void fun(int* &ptr){
    // *ptr = 20;
    // ptr = NULL;
    cout << &ptr << endl;
};

int main(){
    int val = 10;
    int* ptr = &val;

    fun(ptr);

    cout << val << endl << &ptr << endl;
    
    return 0;
}