// Program to count the number of nodes in a Binary Tree

#include<bits/stdc++.h>
using namespace std;
 
typedef struct Node {

    int data;
    struct Node *left;
    struct Node *right;
    Node(int ele) {
        data = ele;
        left = NULL;
        right = NULL;
    }
} Node;
 
int countNodes(Node *root) {
    
    int count = 1;
    
    if(root == NULL) {
        return 0;
    }
    else {
        count = count + countNodes(root -> left);
        count = count + countNodes(root -> right);
        return count;
    }
}
 
int main() {
    
    Node *root = NULL;
    
    root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node (7);
    root -> left -> right -> left = new Node(8);
    root -> right -> left -> right = new Node(9);
    
    cout<<"The Total Number of Nodes in a Binary Tree are "<<countNodes(root);
    return 0;

}
