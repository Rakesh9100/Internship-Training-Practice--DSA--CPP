// Program to count the nodes in a LL and find the length of the linked list

#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node*next;
        
        node(int x) {
            data = x;
            next = NULL;
        }
};

int main() {
    
    node*obj = new node(10);
    obj -> next = new node(20);
    obj -> next -> next = new node(30);
    obj -> next -> next -> next = new node(40);
    // obj->next->next->next->next = new node(50);
    
    int count = 0;
    node*temp = obj;
    while (temp != NULL) {
        count++;
        temp = temp -> next;
    }
    cout << count << endl;
    return 0;

}
