// 268. Missing Number
// https://leetcode.com/problems/missing-number/


/*
Approach 1: Basic Approach

0 + 1 + 2 + 3 + ..... + n = n*(n+1) / 2
a[0] + a[1] + a[2] + a[3] + ..... + a[n-1] = sum
n*(n+1) / 2 - sum = Missing Number

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << n*(n+1) / 2 - sum << endl;
    return 0;

}

But the problem in this approach would be:
if a[i] > 10^4
sum += a[i]; then at some point value of sum will cross the limits of int datatype that is integer overflow. 
*/


/*
Approach 2: Optimised Approach

(0, 1, 2, 3, ....., n) combine (a[0], a[1], a[2], a[3], ....., a[n-1]) = S
xor of all the elements of set S = missing number

(0, 1, 2, 3, 4, 5, 6, 7, 8, 9) combine (9, 6, 4, 2, 3, 5, 7, 0, 1) = (0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 9, 9)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int a[n], ans = 0;
    
    cout << endl << "Please enter elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans ^= a[i];
    }

    for (int i = 0; i <= n; i++) {
        ans ^= i;
    }
    cout << endl << "Missing number is: " << ans << endl;
    return 0;

}

// Time Complexity: O(n)
// Space Complexity: O(n)
