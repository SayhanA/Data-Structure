#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 20, 30};
    list<int> newList;

    // newList = myList;
    newList.assign(myList.begin(), myList.end());

    // insert a Node at the begining.
    newList.push_front(100);
    newList.push_front(110);

    // insert a Node at the end of the list.
    newList.push_back(200);
    newList.push_back(210);

    // delete a Node from begining
    newList.pop_front();

    // delete a Node from end
    newList.pop_back();

    // insert at any position
    newList.insert(next(newList.begin(), 2), 300);

    // insert multiple values
    // newList.insert()

    // Erase a Node form linkedList
    newList.erase(next(newList.begin(), 2));

    for(int val:newList){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}