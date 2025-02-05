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

int main(){
    
    vector<int> arr1 = {1,2,3,4,5};

    Node* head = ArraytoLL(arr1);

    cout<<head->data<<endl<<head->Next;

}
