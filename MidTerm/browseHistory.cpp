// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     string word;
//     Node *prev;
//     Node *next;
//     Node(string word)
//     {
//         this->word = word;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void insert(Node *&head, Node *&tail, string word)
// {
//     Node *newNode = new Node(word);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         Node *tmp = head;
//         while (tmp->next != NULL)
//         {
//             tmp = tmp->next;
//         }
//         tmp->next = newNode;
//         newNode->prev = tmp;
//     }
// }

// void print(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->word << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     string word;
//     while (cin >> word && word != "end")
//     {
//         insert(head, tail, word);
//     }

//     int val;
//     cin >> val;
//     bool isValue = true;
//     Node *tmp = head;
//     string newWord;
//     while (val--)
//     {
//         cin >> newWord;
//         if (newWord == "visit")
//         {
//             cin >> newWord;
//             cout << "------------------------------------------\n";
//             while (tmp != NULL)
//             {
//                 if (tmp->word == newWord)
//                 {
//                     isValue = true;
//                     break;
//                 }
//                 tmp = tmp->next;
//                 isValue = false;
//             }
//         }
//         else if (newWord == "prev")
//         {
//             if (tmp->prev != NULL)
//             {
//                 tmp = tmp->prev;
//                 isValue = true;
//             }
//             else
//             {
//                 isValue = false;
//             }
//         }
//         else if (newWord == "next")
//         {
//             if (tmp->next != NULL)
//             {
//                 tmp = tmp->next;
//                 isValue = true;
//             }
//             else
//             {
//                 isValue = false;
//             }
//         }
//         isValue ? cout << tmp->word << endl : cout << "Not Available" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string word;
    Node *prev;
    Node *next;
    Node(string word)
    {
        this->word = word;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert(Node *&head, Node *&tail, string word)
{
    Node *newNode = new Node(word);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string word;
    while (cin >> word && word != "end")
    {
        insert(head, tail, word);
    }

    int q;
    cin >> q;
    Node *curr = head;

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string add;
            cin >> add;
            Node *tmp = head;
            bool found = false;

            while (tmp != NULL)
            {
                if (tmp->word == add)
                {
                    curr = tmp;
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }

            if (found)
            {
                cout << curr->word << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (curr->next != NULL)
            {
                curr = curr->next;
                cout << curr->word << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (curr->prev != NULL)
            {
                curr = curr->prev;
                cout << curr->word << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
