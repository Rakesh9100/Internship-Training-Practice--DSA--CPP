// Program to check a number is prime or not

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, i = 1, count = 0;
    cout << "Please enter a number: " << endl;
    cin >> n;

    while (i <= n) {
        if (n % i == 0) {
            count++;
            i++;
        }
    }
    
    if (count == 2) {
        cout << endl << "This is a Prime number";
    }
    else {
        cout << endl << "This is not a Prime number";
    }
    return 0;

}

// Time Complexity: O(n)
// Space Complexity: O(1)
