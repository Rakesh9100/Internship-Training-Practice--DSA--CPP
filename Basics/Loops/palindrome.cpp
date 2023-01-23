// Program to check a number is palindrome or not

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, rev = 0, x, temp;
    cout << "Please enter a number: " << endl;
    cin >> n;

    temp = n;
    while (temp != 0) {
        x = temp % 10;
        rev = (rev * 10) + x;
        temp = temp / 10;        
    }

    if(rev == n) {
        cout << endl << "This is a Palindrome number";
    }
    else {
        cout << endl << "This is not a Palindrome number";
    }
    return 0;

}

// Time Complexity: O(number of digits in the input number)
// Space Complexity: O(1), Constant Space
