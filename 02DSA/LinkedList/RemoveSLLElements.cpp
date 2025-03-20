// Given the head of a linked list and an integer val,
// remove all the nodes of the linked list that has Node.val == val, and return the new head.

// Basically we have to remove all those nodes for which the value of node == val(argument value)

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
    void InsertAtEnd(int value){
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
    void RemoveSLLElements(int val){
         
     // first we will implement a while loop, that will check if head->val == val

     while(head && head->data == val){
          Node* temp = head;
          head=head->next;
          delete temp;
     }

     Node* curr = head;

     while(curr && curr->next){
        if(curr->next->data == val){
            Node*temp = curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
     }

    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
   LinkedList list1;
   list1.InsertAtEnd(1);
   list1.InsertAtEnd(6);
   list1.InsertAtEnd(2);
   list1.InsertAtEnd(3);
   list1.InsertAtEnd(4);
   list1.InsertAtEnd(5);
   list1.InsertAtEnd(6);

   list1.display();

   list1.RemoveSLLElements(6);

   list1.display();
}