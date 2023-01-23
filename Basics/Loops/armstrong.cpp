// Program to check whether a number is Armstrong or not
/*
Example:
371
Number of digits = 3 so power = 3
(3)^3 + (7)^3 + (1)^3 = 371 and as both are equal so 371 is an armstrong number
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, count = 0;
    cout << "Please enter a number: " << endl;
    cin >> n;

    int temp = n, num = n;
    
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }
    
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, count);
        num = num / 10;
    }

    if (sum == n) {
        cout << endl << n << " is an Armstrong number" << endl;
    }
    else {
        cout << endl << n << " is not an Armstrong number" << endl;
    }
    return 0;

}
