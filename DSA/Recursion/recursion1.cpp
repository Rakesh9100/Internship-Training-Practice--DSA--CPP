// Program to recursively print a vector

#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> v, int n) {
    
    cout << "size " << n << ", ";
    // base case- it helps to know that my recursive calling should stop now
    if (n == 0) {
        return;
    }
    cout << "last element " << v[n-1] << endl;
    
    helper(v, n-1);
    // calling same function from inside the function-> recursion

}

int main() {
    
    //wap to recursively print a vector
    vector<int>v={3, 2, 5, 1, 9, 4, 8};
    helper(v, 7);
    // 1. to start from a vector of size n
    // 2. print the last number, reduce the size by 1
    // 3. now u have a vector with size n-1->n'
    // 4. print the last number reduce the size by 1
    // 5. n'-1->n''
    // ...
    // ....
    // ...
    // ...
    // size n'''''''=0
    return 0;

}
