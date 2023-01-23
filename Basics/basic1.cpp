// Program to print Simple Interest

/*
brackets: precedence rule in C++
* is given more priority than +/-
*,/ are at the same priority level -> Calculate from left to right
*/

/*
integer/integer -> integer
integer/float -> float
float/integer -> float
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int p = 100, r = 2, t = 3;
    int SI = (p*r*t)/100;

    cout << "The Simple Interest is: " << SI << endl;
    return 0;

}
