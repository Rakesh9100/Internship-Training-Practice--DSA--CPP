// Program to print the sum of digits of a number

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, rem, sum = 0;
    cout << "Please enter a number: " << endl;
    cin >> n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
            
    }
    cout << endl << "Sum of digits of this number is: " << sum << endl;
    return 0;

}
