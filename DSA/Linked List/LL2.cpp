// Program to insert an element in between of the linked list

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
        
        node (int x) {
            data = x;
            next = NULL;
        }
};

int main() {

    node *obj = new node(10);
    obj->next = new node(20);
    obj->next->next = new node(30);
    obj->next->next->next = new node(40);
    obj->next->next->next->next = new node(50);
    
    // 10-20-30-40-50
    // 10-20-30-60-40-50
    
    node* x = obj;
    int shifts = 2;
    
    for (int i = 1; i <= shifts; i++) {
        x = x -> next;
    }
    
    node *temp = new node(60);
    temp->next = x->next;
    x->next = temp;
    
    temp = obj;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
    
}
