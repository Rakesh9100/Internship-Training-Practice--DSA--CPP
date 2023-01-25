// Program to take all the values as inputs and get the sum of odd and even index rows elements

/*

Example:
0th row -> 1 2
1st row -> 3 4
2nd row -> 5 6
3rd row -> 7 8

Sum of odd index rows values = 1st row + 3rd row = 3+4+7+8 = 22
Sum of even index rows values = 0th row + 2nd row = 1+2+5+6 = 14

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows, cols;
    cout << "Please enter the number of rows: " << endl;
    cin >> rows;
    cout << endl << "Please enter the number of columns: " << endl;
    cin >> cols;

    int arr[rows][cols];

    cout << endl << "Please enter the values: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int odd = 0, even = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                even += arr[i][j];
            }
        }
        else {
            for (int j = 0; j < cols; j++) {
                odd += arr[i][j];
            }
        }
    }
    cout << endl << "Odd sum: " << odd << endl;
    cout << "Even sum: " << even << endl; 
    return 0;

}
