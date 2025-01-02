#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data= data1;
        next= next1;
    }
     void insertAtHead(Node* &head,int n){
        Node* next = new Node (1, nullptr);
         next -> next= nullptr;
         next = head;

           
 }
};