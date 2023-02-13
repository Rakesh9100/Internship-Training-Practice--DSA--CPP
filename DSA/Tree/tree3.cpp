// Program to find the maximum height of a Binary tree

#include <iostream>
using namespace std;

class node {
    
    public:
    int data;
    node* left;
    node* right;

};

int height (node* node) {

    if (node == NULL) {
        return 0;
    }
    else {
        int lDepth = height(node->left);
        int rDepth = height(node->right);
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }

}

node* insertNode (int data) {
    
    node* Node = new node();
    Node -> data = data;
    Node -> left = NULL;
    Node -> right = NULL;
    return(Node);

}

int main() {
    
    node *root = insertNode(4);
    root -> left = insertNode(5);
    root -> right = insertNode(0);
    root -> left -> left = insertNode(1);
    root -> left -> right = insertNode(9);
    cout << "The height of the given binary tree is: " << height(root);
    return 0;

}
