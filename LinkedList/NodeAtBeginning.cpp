#include <iostream>
using namespace std;

struct Node
{ 
    /* data */
    int data;
    Node *next;
};

Node *head;

void insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    int n, value;
    cout << "How many values you want to enter ?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value" << endl;
        cin >> value;
        insert(value);
        print();
    }
    return 0;
}