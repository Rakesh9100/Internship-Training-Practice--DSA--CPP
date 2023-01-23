// Program to perform basic arithmetic operations

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cout << "Please enter first number: " << endl;
    cin >> a;
    cout << endl << "Please enter second number: " << endl;
    cin >> b;
    
    int add = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b;

    cout << endl << "Arithmetic Operations are: " << endl << add << " " << sub << " " << multi << " " << div << " ";
    return 0;

}
