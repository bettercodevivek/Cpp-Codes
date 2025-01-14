#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(int val){
       data=val;
       Next=NULL;
    }
};

void insertAtEnd(Node*& head,int val){
    Node* node1=new Node(val);
    if(head==NULL){
        head=node1;
        return;
    }

    Node* temp=head;
    while(temp->Next != NULL){
        temp=temp->Next;
    }
    temp->Next=node1;
}

void display(Node* head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp=temp->Next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;

    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);

    display(head);
}