// How to reverse a SLL
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* Next;

public:
Node(int val){
    data=val;
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

    void InsertAtEnd(int value){
        Node* newNode = new Node(value);
          if(head == nullptr){
            head=newNode;
            return;
          }
          Node*temp = head;
          while(temp->Next != nullptr){
            temp=temp->Next;
          }
          temp->Next=newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"-->";
            temp=temp->Next;
        }
        cout<<"NULL"<<endl;
    }
    
    void Reverse(){
        Node* curr = head;
        Node* next=nullptr;
        Node* prev=nullptr;

        while(curr != nullptr){
            next=curr->Next;
            curr->Next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
};


int main(){
    LinkedList list1;
    list1.InsertAtEnd(10);
    list1.InsertAtEnd(20);
    list1.InsertAtEnd(30);
    list1.InsertAtEnd(40);
    list1.InsertAtEnd(50);

    list1.display();

    list1.Reverse();

    list1.display();
}