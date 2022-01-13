#include <iostream>
using namespace std;

struct node
{
 int data;
 node *next;
};

node *head;

void insert(int value, int n)
{
 node *temp = new node();
 temp->data = value;
 temp->next = NULL;
 if (n == 1)
 {
  temp->next = head;
  head = temp;
  return;
 }

 node *temp1 = head;
 for (int i = 0; i < n - 2; i++)
 {
  temp1 = temp1->next;
 }

 temp->next = temp1->next;
 temp1->next = temp;
}

//reversing code ---- Iterative approach

void reverse()
{
 node *current = head;
 node *prev = NULL, *next = NULL;

 while (current != NULL)
 {
  next = current->next;
  current->next = prev;
  prev = current;
  current = next;
 }

 head = prev;
}

void print()
{
 node *temp = head;
 while (temp != NULL)
 {
  cout << temp->data << " ";
  temp = temp->next;
 }
}

int main()
{
 head = NULL;
 insert(1, 1);
 insert(2, 1);
 print();
 cout << endl;
 reverse();
 print();
}