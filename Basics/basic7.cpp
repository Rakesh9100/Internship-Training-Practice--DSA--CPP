// Bitwise Operators

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5, b = 9;
    // a = 5 (00000101), b = 9 (00001001)

    // & bitwise AND operator
    // a & b = (00000001)
    cout << "Value after applying AND operator on a and b: " << endl;
    cout << (a & b) << endl;

    // | bitwise OR operator
    cout << endl << "Value after applying OR operator on a and b: " << endl;
    cout << (a | b) << endl;
    
    // ^ bitwise XOR operator
    cout << endl << "Value after applying XOR operator on a and b: " << endl;
    cout << (a ^ b) << endl;
    
    // << leftshift operator, x << y = x*(2^y)
    cout << endl << "Value after applying Leftshift operator on a: " << endl;
    cout << (a << 2) << endl;
    
    // >> rightshift operator, x << y = x/(2^y)
    cout << endl << "Value after applying Rightshift operator on b: " << endl;
    cout << (b >> 2) << endl;
    
    // ~ bitwise NOT operator, it inverts all bits
    // (~a) = (11111010)
    cout << endl << "Value after applying not operator on a: " << endl;
    cout << (~a) << endl;
    return 0;

}
