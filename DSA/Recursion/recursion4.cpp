// Program to implement GCD function using recursion

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    
    if (b != 0) {
        return gcd(b, a % b); // general case
    }
    else {
        return a; // base case
    }

}

int main() {

    int n1, n2, result;
    
    cout << "Enter the first number: " << endl;
    cin >> n1;
    cout << endl << "Enter the second number: " << endl;
    cin >> n2;
    
    result = gcd (n1, n2);
    cout << endl << "GCD of " << n1 << " and " << n2 << " is: " << result;
    return 0;

}
