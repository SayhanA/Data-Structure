#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 2, 3, 40, 5, 20,};

    // Remove all matching values
    // myList.remove(2);

    // Sort Linked List assending order
    // myList.sort();

    // Sort Linked List descending order
    // myList.sort(greater <int>());

    // Remove next duplicate valuey *It works with sorted array only.
    // myList.sort();
    // myList.unique();

    // reverse print
    myList.reverse();

    for(int val:myList){
        cout << val << " ";
    }
    
    return 0;
}