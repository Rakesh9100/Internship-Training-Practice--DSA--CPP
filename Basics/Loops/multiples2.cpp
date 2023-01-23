// Program to print numbers from 1 to n except the multiples of 4

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: "<< endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            // i will not print in this case
            continue;
        }
        cout << i << " ";
    }
    return 0;

}
