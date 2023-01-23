// Program to take 3 different values (different data types -> int, char, float) and then print each of them in the same order in a new line
// Example: 14 A 25.25

#include <bits/stdc++.h>
using namespace std;

int main() {

    int firstInput;
    char secondInput;
    float thirdInput;

    cout << "Please enter the int value: " << endl;
    cin >> firstInput;
    cout << "Please enter the char value: " << endl;
    cin >> secondInput;
    cout << "Please enter the float value: " << endl;
    cin >> thirdInput;

    cout << endl << "The values are: " << endl;
    cout << firstInput << endl;
    cout << secondInput << endl;
    cout << thirdInput << endl;
    return 0;

}
