// Program to print the Right viewing nodes of a binary tree

#include <iostream>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node*left;
    node*right;
    
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void preorder (node*root) {

    // root-left-right    
    if (root == NULL) {
        return;
    }
    
    cout << root -> data << " ";
    preorder (root -> left);
    preorder (root -> right);

}

void inorder (node*root) {
    
    // left-root-right
    if (root == NULL) {
        return;
    }
    
    inorder (root -> left);
    cout << root -> data << " ";
    inorder (root -> right);

}

void postorder (node*root) {
    
    if (root == NULL) {
        return;
    }
    
    postorder (root -> left);
    postorder (root -> right);
    cout << root -> data << " ";

}

void rightView (node*root, int currLevel, int &maxLevel) {
    
    if (root == NULL) {
        return;
    }
    
    if (currLevel > maxLevel) {
        cout << root -> data << " ";
        maxLevel = currLevel;
    }
    
    rightView (root -> right, currLevel + 1, maxLevel);
    rightView (root -> left, currLevel + 1, maxLevel);
    
}

int main() {

    node*root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root -> left -> left = new node(4);
    root -> left -> right = new node(5);
    root -> left -> right -> left = new node(6);
    root -> right -> right = new node(7);
    
    int currLevel = 0, maxLevel = -1;
    rightView (root, currLevel, maxLevel);

    return 0;
    
}
