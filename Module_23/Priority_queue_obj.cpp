#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;

    Student(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.roll >= b.roll)
            return true;
        else
            return false;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age, roll;
        cin >> name >> age >> roll;

        Student obj(name, age, roll);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().age << " " << pq.top().roll << endl;
        pq.pop();
    }

    return 0;
}