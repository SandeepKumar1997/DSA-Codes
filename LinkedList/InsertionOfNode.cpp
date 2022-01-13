#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head;
        
void insert(int value,int position){
node* temp=new node();
temp->data=value;
temp->next=NULL;
if(position==1){
    temp->next=head;
    head=temp;
    return;
}
node* temp1=head;
for (int i = 0; i < position-2; i++){
temp1=temp1->next;
}
temp->next=temp1->next;
temp1->next=temp;
}

void print(){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}



int main(){
head= NULL;
 int n, value,position;
    cout << "How many values you want to enter ?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value" << endl;
        cin >> value;
        cout<<endl;
        cout<<"Enter the postion"<<endl;
        cin>>position;
        insert(value,position);
        print();
    }
    return 0;
}