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
   
    int n;
    cin>>n;
    vector<int> vec(n) ;
   

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec[i]=x;
    }
    
    Node* head = ArrayToLL(vec);

    Node*temp = head;

    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }
}