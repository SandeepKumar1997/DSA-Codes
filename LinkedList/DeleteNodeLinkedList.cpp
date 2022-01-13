#include <iostream>
using namespace std;

struct node
{
 int data;
 node *next;
};

node *head;

void insert(int value, int position)
{
 node *temp = new node();
 temp->data = value;
 temp->next = NULL;
 if (position == 1)
 {
  temp->next = head;
  head = temp;
  return;
 }
 node *temp1 = head;
 for (int i = 0; i < position - 2; i++)
 {
  temp1 = temp1->next;
 }

 temp->next = temp1->next;
 temp1->next = temp;
}

void print()
{
 node *temp = head;
 while (temp != NULL)
 {
  cout << temp->data << " ";
  temp = temp->next;
 }
 cout << endl;
}

void deleteNode(int position)
{
 node *temp = head;
 if (position == 1)
 {
  head = temp->next;
  delete (temp);
  return;
 }
 for (int i = 0; i < position - 2; i++)
 {
  temp = temp->next;
 }
 node *temp1 = temp->next;
 temp->next = temp1->next;
 delete (temp1);
}

int main()
{
 head = NULL;
 int n, value, position, index;
 cout << "How many values you want to enter ?" << endl;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cout << "Enter the value" << endl;
  cin >> value;
  cout << endl;
  cout << "Enter the postion" << endl;
  cin >> position;
  insert(value, position);
 }
 print();
 cout << "Enter the postion at which you want to delete the value" << endl;
 cin >> index;
 deleteNode(index);
 cout << endl;
 print();
 return 0;
}