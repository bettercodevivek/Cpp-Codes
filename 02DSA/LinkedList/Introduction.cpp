// Linked List is a linear data structure like array, but it doesn't store values in contigous locations like array.

// building block of LL is a node.

// Each node contains two things :- 1=> data and 2=> pointer to next node

// how to create a node for LL
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* Next;
    
    public:
    Node(int val){
        data=val;
        Next=nullptr;
    }
};

// Conversion  of an array to a Linked List, and the function returns a head pointer.

Node* ArraytoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->Next=temp;
        mover=temp;
    }
    return head;
}

bool CheckIfExists(Node* head, int val){
    Node*temp = head;
    
    while(temp != nullptr){
        if(temp->data == val){
            return true;
        }
        temp=temp->Next;
    }
    return false;
}

Node* DeleteHead(Node* head){
    Node* temp = head;
    head=head->Next;
    free(temp);
    return head;
}

void DeleteLast(Node* head){
    Node* temp = head;
    while(temp->Next->Next != nullptr){
        temp=temp->Next;
    }
    Node* last = temp->Next;
    temp->Next=nullptr;
    free(last);

}

void insertAtBegin(Node*& head,int data){
    Node* newNode = new Node(data);
    newNode->Next = head;
    head=newNode;
}

int main(){
    
    vector<int> arr1 = {1,2,3,4,5};

    Node* head = ArraytoLL(arr1);

    // cout<<head->data<<endl<<head->Next;

    // let us see traversal through a linked list

    // Node* newHead = DeleteHead(head);

    //  DeleteLast(head);

    insertAtBegin(head,6);

    Node*temp = head;
 

    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }

    

    // cout<<CheckIfExists(head,22);

}
