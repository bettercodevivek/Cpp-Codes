#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtPos(Node*& head,int val,int pos){
    Node* node1 = new Node(val);

    if(pos==1){
        node1->next=head;
        head=node1;
        return;
    }

    Node* temp=head;
    int count=0;
    while(temp!=NULL && count<pos-1){
        temp=temp->next;
        count++;
    }

     if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        delete node1;
        return;
    }
    node1->next=temp->next;
    temp->next=node1;

}