/*
Input: 5
Output:
1*******1
12*****21
123***321
1234*4321
123454321
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        
        // numbers from  1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // spaces -> 2*(n-i)-1
        for (int j = 1; j <= 2*(n-i)-1; j++) {
            cout << "*";
        }
        
        // numbers from i to 1
        for (int j = i-1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;

}
