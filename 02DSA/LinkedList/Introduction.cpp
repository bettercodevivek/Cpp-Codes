// Linked List is a linear data structure like array, but it doesn't store values in contigous locations like array.

// building block of LL is a node.

// Each node contains two things :- 1=> data and 2=> pointer to next node

// how to create a node for LL

class Node {
    int data;
    Node* Next;

    Node(int val){
        data=val;
        Next=nullptr;
    }
};