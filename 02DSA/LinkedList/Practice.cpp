#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* Next;

    public:
    Node(int value){
        data=value;
        Next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=nullptr;
    }
   void insertAtEnd(int val){
    Node* newnode = new Node(val);
    if(head == nullptr){
        head=newnode;
        return;
    }
    Node* temp = head;
    while(temp->Next != nullptr){
        temp=temp->Next;
    }
    temp->Next=newnode;
   }
   void insertAtBegin(int val){
    Node* newnode = new Node(val);
    newnode->Next = head;
    head=newnode;
   }
   void insertAtSpecific(int val, int pos){

    // make sure to insert edge case for empty linked list and for index out of bounds
      Node* newnode = new Node(val);
      int idx = 0;
      Node* temp = head;
      while(temp != nullptr && idx < pos - 1){
        idx++;
        temp=temp->Next;
      }
      newnode->Next = temp->Next;
      temp->Next=newnode;
   }
   void deleteAtBegin(){
    
    
   }
   void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }
    cout<<"NULL"<<endl;
   }

};

int main(){
    LinkedList list1;
    list1.insertAtEnd(10);
    list1.insertAtEnd(20);
    list1.insertAtEnd(30);
    list1.insertAtEnd(40);
    list1.insertAtBegin(60);
    list1.insertAtSpecific(70,4);
    // list1.deleteAtBegin();

    list1.display();
}