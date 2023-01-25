// Program to print all the diagonals of a 2D array matrix

/*

Input:
1 5 9  13 17
2 6 10 14 18
3 7 11 15 19
4 8 12 16 20

Output:
4
3 8
2 7 12
1 6 11 16
5 10 15 20
9 14 19
13 18
17

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int r, c;
    cout << "Please enter the number of rows: " << endl;
    cin >> r;
    cout << endl << "Please enter the number of columns: " << endl;
    cin >> c;

    int arr[r][c];

    cout << endl << "Please enter the values: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Diagonals of this matrix are: " << endl;
    // for the starting points of the first column

    for (int i = r-1; i >= 0; i--) {
        int row = i, col = 0;
        while (row < r) {
            cout << arr[row][col] << " ";
            row++, col++;
        }
        cout << endl;
    }

    // for the starting points of the first row, excluding 0,0

    for (int j = 1; j <= c; j++) {
        int row = 0, col = j;
        while (col < c) {
            cout << arr[row][col] << " ";
            row++, col++;
        }
        cout << endl;
    }
    return 0;

}
