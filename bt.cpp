#include <bits/stdc++.h>
using namespace std;

struct Node{ //creating a binary tree
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data= value;
        left= right= nullptr;
    }
};

void preOrder(Node* root){ //pre order traversal
    if(root== nullptr) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(Node* root){ //post order traversal
    if(root== nullptr) return ;
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";

}
void inOrder(Node* root){ //in order traversal
    if(root== nullptr) return ;
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->right= new Node(5);
    preOrder(root); //printing binary tree
    postOrder(root);
    inOrder(root);


}