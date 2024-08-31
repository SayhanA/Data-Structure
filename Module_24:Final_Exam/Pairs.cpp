#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class cmp{
    public:
        bool operator()(Person a, Person b) {
        if (a.name != b.name) {
            return a.name > b.name;
        }
        return a.age < b.age;
    }
};

int main()
{
    priority_queue<Person, vector<Person>, cmp> pq;

    string name;
    int n, age;
    cin >> n;
    while (n--)
    {
        cin >> name >> age;
        pq.push(Person(name, age));
    }   

    while (!pq.empty())
    {
        Person top = pq.top();
        cout << top.name << " " << top.age << endl;
        pq.pop();
    }
    
    
    return 0;
}