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

vector<int>  preOrder(Node* root){ //pre order traversal
    vector<int> preorder;
    if(root== nullptr) return preorder ;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root= st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right) st.push(root->right);
        if(root->left) st.push(root->left);
    }
       return preorder; 

    }
    
/*void postOrder(Node* root){ //post order traversal
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
}*/

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(7);
    root->left->right= new Node(4);
    root->left->left= new Node(3);
    root->left->right->left= new Node(6);
    root->left->left->left= new Node(5);
    preOrder(root); //printing binary tree
    //postOrder(root);
    //inOrder(root);


}