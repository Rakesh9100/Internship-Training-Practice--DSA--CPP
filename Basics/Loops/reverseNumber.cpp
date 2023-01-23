// Program to reverse a number

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, rem, rev = 0;
    cout << "Please enter a number to reverse: " << endl;
    cin >> n;

    while (n != 0) {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    cout << endl<< "Reverse of this number is: " << rev;
    return 0;

}
