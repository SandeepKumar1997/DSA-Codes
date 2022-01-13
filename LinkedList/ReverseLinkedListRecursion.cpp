#include <iostream>
using namespace std;


struct node {
 int data;
 node *next;
};
node *head;
void insert(int data,int n){

node *temp=new node();
temp->data=data;
temp->next=NULL;
if(n==1){
 temp->next=head;
 head=temp;
 return;
}

node *temp1=head;
for(int i=0;i<n-2;i++){
 temp1=temp1->next;
}

temp->next=temp1->next;
temp1->next=temp;


}

void reverse(node *p){
 if(p->next==NULL){
  head=p;
  return;
 }

 reverse(p->next);
 node *q=p->next;
 q->next=p;
 p->next=NULL;
}

void print(){
 node *temp=head;
 while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 cout<<endl;
}


int main(){
 head=NULL;
 insert(1,1);
 insert(2,2);
 insert(3,3);
 insert(4,4);
 insert(5,5);
 insert(6,6);
 print();
 cout<<endl;
 reverse(head);
 print();
}