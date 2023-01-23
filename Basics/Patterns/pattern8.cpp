/*
Input: 5
Output:
10000
12000
12300
12340
12345
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                cout << j << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;

}
