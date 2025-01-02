#include <iostream>
using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to insert nodes in the binary tree
Node* insertNode(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val); // Create a new node if tree is empty
    }

    // Insert data in the left or right subtree
    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else {
        root->right = insertNode(root->right, val);
    }

    return root;
}

// Inorder traversal of the binary tree (left, root, right)
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    // Insert nodes into the binary tree
    root = insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 6);

    // Inorder traversal of the binary tree
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
