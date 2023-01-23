// Program to check whether the series of n integers are a part of strictly decreasing sequence and then strictly increasing sequence
// n = 5
// 4 2 1 3 8 -> yes
// 4 2 1 4 3 -> no

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;

    int prev = -1;
    bool dec = true; //  tells that my ongoing seq is decreasing
    bool ans = true;
    
    for (int i = 0; i <= n; i++) {
        int curr;
        cin >> curr;

        if (i == 0) {
            prev = curr;
            continue;
        }

        // 1. if I am in the inc. seq
        // 2. if I am in the dec. seq
        // 3. if I am the point of change: dec. will change to inc.

        if (dec == true) {
            if (curr < prev) {
                prev = curr;
            }
            else if (curr == prev) {
                ans = false;
                break;
            }
            else {
                // curr > prev
                dec = false;
                prev = curr;
            }
        }
        else {
            // I am at the inc. seq
            if (curr > prev) {
                prev = curr;
            }
            else {
                // curr <= prev
                ans = false;
                break;
            }
        }
    }

    if (ans == true) {
        cout << endl << "Yes";
    }
    else {
        cout << endl << "No";
    }
    return 0;

}
