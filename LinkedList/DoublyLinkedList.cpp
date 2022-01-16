#include <iostream>
using namespace std;

struct node{
 int data;
 node *next;
 node *prev;
};
//Global head variable
node *head= NULL;

//It will vreate the new node and return it's address

node* getNewNode(int x){
 node *newNode=new node();
 newNode->data=x;
 newNode->next=NULL;
 newNode->prev=NULL;
 return newNode;
}

//Insertion of node at head
void insertNodeAtHead(int x){
 node *createNode=getNewNode(x);
 if(head==NULL){
  head=createNode;
  return;
 }

 head->prev=createNode;
 createNode->next=head;
 head=createNode;

}

//Insertion at tail

void insertNodeAtTail(int x){
 node *createNode=getNewNode(x);
 if(head==NULL){
  head=createNode;
  return;
 }

 node *temp=head;
 while(temp->next!=NULL){
  temp=temp->next;
 }

 createNode->prev=temp;
 temp->next=createNode;

}

//Print in forward order

void print(){
 node *temp=head;
 cout<<"Forward order :" <<" ";
 while (temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 cout<<endl;
 
}

//Print in reverse order

void reversePrint(){
 node *temp=head;
 
 while (temp->next!=NULL)
 {
  temp=temp->next;
 }
cout<<"Reverse order :" <<" ";
while(temp!=NULL){
 cout<<temp->data<<" ";
 temp=temp->prev;
}
 cout<<endl;
}

int main(){
 head=NULL;
 insertNodeAtHead(1);
 insertNodeAtHead(2);
 insertNodeAtHead(3);
 insertNodeAtHead(4);
 print();
 insertNodeAtTail(5);
 insertNodeAtTail(6);
 insertNodeAtTail(7);
 print();

 reversePrint();
}