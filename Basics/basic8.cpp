// Program to calculate min amd max out of 3 given numbers using if else statement

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c;
    cout << "Please enter first number: " << endl;
    cin >> a;
    cout << "Please enter second number:" << endl;
    cin >> b;
    cout << "Please enter third number: " << endl;
    cin >> c;

    // To get the max number
    if (a >= b and a >= c) {
        cout << endl << a << " is max number" << endl;
    }
    else if (b >= a and b >= c) {
        cout << endl << b << " is max number" << endl;
    }
    else {
        cout << endl << c << " is max number" << endl;
    }

    // To get the min number
    if (a <= b and a <= c) {
        cout << a << " is min number" << endl;
    }
    else if (b <= a and b <= c) {
        cout << b << " is min number" << endl;
    }
    else {
        cout << c << " is min number" << endl;
    }
    return 0;

}
