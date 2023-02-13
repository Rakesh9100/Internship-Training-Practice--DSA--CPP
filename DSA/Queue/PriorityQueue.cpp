/*

Priority Queue

A priority queue is a container that provides constant time extraction of the largest element, at the expense of logarithmic insertion.

Declaration:
priority_queue<int>pq;

Member functions of priority_queue are:
push(), pop()  // Time complexity : O(log n)
empty(), top(),size() // Time Complexity : O(1)

*/

#include <iostream>
#include<queue>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    
    while (!pq.empty()) {
        cout << pq.top() << endl; // 20 10 5
        pq.pop();
    }
    return 0;
    
}
