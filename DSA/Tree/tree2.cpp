// Program to print sum of all the nodes of a Binary tree

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};
    
struct node *root = NULL;
struct node* createNode (int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}
       
int calculateSum (struct node *temp) {
    int sum, sumLeft, sumRight;
    sum = sumRight = sumLeft = 0;

    if (root == NULL) {
        cout << "Tree is empty" << endl;
        return 0;
    }
    else {
        if (temp -> left != NULL)
            sumLeft = calculateSum (temp -> left);
            if (temp -> right != NULL)
                sumRight = calculateSum (temp -> right);
                sum = temp->data + sumLeft + sumRight;
                return sum;
    }
}

int main() {
    root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root -> right -> left = createNode(5);
    root -> right -> right = createNode(6);

    cout << "Sum of all nodes of binary tree: " << calculateSum(root);
    return 0;

}
