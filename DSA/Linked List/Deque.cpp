/*

Deque - Double Ended Queue
Deques are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or
its back).

Declaration:
deque<int>q;

Member functions of Queues are:
push_back(),push_front(),pop_back() , pop_front()// Time Complexity of every member function is O(1)

*/

#include <bits/stdc++.h>
/*
#include <iostream>
#include<queue>
*/
using namespace std;

int main() {
    
    char array[4] = {'a', 'b', 'c', 'd'};
    deque<char> dq;
    char ch;
    for (int i = 0; i < 4; i++) {
        dq.push_front(array[i]);
    }
    
    // dcba
    for (int i = 0; i < 4; i++) {
        dq.push_back(array[i]);
    }
    
    // dcbaabcd
    cout << dq.front() << endl; // d
    cout << dq.back() << endl; // d
    for (int i = 0; i < 3; i++) {
        dq.pop_front();
    }
    
    for (int i = 0; i < 3; i++) {
        dq.pop_back();
    }
    
    // aa
    while (!dq.empty()) {
        cout << dq.front();
        dq.pop_front();
    }
    return 0;

}
