// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int val){
        data=val;
        next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=nullptr;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void Display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }

    void RemoveDuplicates(){
        Node* temp=head;
        while(temp->next != nullptr){
            if(temp->data == temp->next->data){
                Node* del = temp->next;
                temp->next=temp->next->next;
                delete(del);
            }
            else{
                temp=temp->next;
            }
        }
    }
};
int main(){
  LinkedList list1;
  list1.insertAtEnd(1);
  list1.insertAtEnd(1);
  list1.insertAtEnd(2);
  list1.insertAtEnd(3);
  list1.insertAtEnd(3);

  list1.Display();

  list1.RemoveDuplicates();

  list1.Display();
}