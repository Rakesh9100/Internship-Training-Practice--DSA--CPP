// Program to print the WAVE pattern of a 2D array matrix

/*

Input:
1 2 3 4
5 6 7 8
9 10 11 12

Output:
1 5 9 10 6 2 3 7 11 12 8 4

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

    cout << endl << "WAVE pattern of this matrix is: " << endl;
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for (int i = rows-1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;

}
