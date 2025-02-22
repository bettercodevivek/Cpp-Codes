// PRACTICING CREATION AND TRAVERSAL OF A SINGLY LINKED LIST
#include<bits/stdc++.h>
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

class LinkedList {
    private:
    Node* head;

    public:
    LinkedList(){
        head = nullptr;
    }

    void insertNode(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->Next != nullptr){
            temp=temp->Next;
        }
        temp->Next=newNode;
    }

    void Display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp=temp->Next;
        }
        cout<<"nullptr"<<endl;
    }
};

Node* ArrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i]);
       mover->Next = temp;
        mover = temp;
    }
    return head;
}

int main(){

    LinkedList list1;

    list1.insertNode(10);
    list1.insertNode(20);
    list1.insertNode(30);
    list1.insertNode(40);
    list1.insertNode(50);

    list1.Display();
   
    // int n;
    // cin>>n;
    // vector<int> vec(n) ;
   

    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     vec[i]=x;
    // }
    
    // Node* head = ArrayToLL(vec);

    // Node*temp = head;

    // while(temp != nullptr){
    //     cout<<temp->data<<"->";
    //     temp=temp->Next;
    // }
}