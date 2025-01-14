#include<iostream>
using namespace std;
class Node{
    public:
   int data;
   Node* Next;
   Node(int value){
       data=value;
       Next=NULL;
   }
};

void insertAtEnd(Node*& head,int val){
    Node* node1=new Node(val);
    if(head == NULL){
        head=node1;
        return;
    }
    Node* temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=node1;
}
void insertAtBegin(Node*& head,int val){
    Node* node1=new Node(val);
    
    if(head==NULL){
        head=node1;
    }
    else{
        node1->Next=head;
        head=node1;
    }
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtBegin(head,70);
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtBegin(head,60);
    
    display(head);
}