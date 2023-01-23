/*
Input: 5
Output:
#####
#   #
#   #
#   #
#####
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;

}
