// Program to find Inorder, Preorder, and Postorder Traversals

#include <iostream>
using namespace std;

class node {
    
    public:
    int data;
    node *left;
    node *right;
    node (int x) {
        data = x;
        left = NULL;
        right = NULL;
    }

};

void preorder (node *root) {
    
    // root -> left -> right
    if (root == NULL) {
        return;
    }
    
    cout << root -> data << " ";
    preorder (root -> left);
    preorder (root -> right);
}

void inorder (node *root) {
    // left -> root -> right
    if (root == NULL) {
        return;
    }
    
    inorder (root -> left);
    cout << root -> data << " ";
    inorder (root -> right);
}

void postorder (node *root) {
    // left -> right -> root
    if (root == NULL) {
        return;
    }
    
    postorder (root -> left);
    postorder (root -> right);
    cout << root -> data << " ";
}

int main() {
    node *root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root -> left -> left = new node(4);
    root -> left -> right = new node(5);
    root -> left -> right -> left = new node(6);
    root -> right -> right = new node(7);
    
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
    return 0;
    
}