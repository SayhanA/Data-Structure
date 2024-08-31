#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(const Student &a, const Student &b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    string name;
    int n, x, q, roll, marks;
    cin >> n;

    while (n--)
    {
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    cin >> x;
    while (x--)
    {
        cin >> q;
        if (q == 0)
        {
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (q == 1)
        {
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (q == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}