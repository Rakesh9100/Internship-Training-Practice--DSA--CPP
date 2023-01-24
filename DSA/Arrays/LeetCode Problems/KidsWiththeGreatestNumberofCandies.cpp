// 1431. Kids With the Greatest Number of Candies
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int c[n]; // c = candy array
    int maxi = INT_MIN;
    
    cout << endl << "Please enter elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] > maxi) {
            maxi = c[i];
        }
    }

    int ec; // ec = extra candy
    cout << endl << "Please enter the number of extra candies: " << endl;
    cin >> ec;
    bool ans[n];
    for (int i = 0; i < n; i++) {
        if (c[i]+ec >= maxi) {
            ans[i]=true;
        }
        else {
            ans[i]=false;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;

}

// Time Complexity: O(n)
