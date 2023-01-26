// Write a program to reverse a matrix (NxN) in an anticlockwise manner for 90 degree. Take all the values as input. For example, if the matrix is: [[1 2 3], [4 5 6], [7 8 9]] So, the rotated matrix has to look like: [[3 6 9], [2 5 8], [1 4 7]] For reference, go through the concepts discussed in class regarding rotation of matrix and make sure the matrix is actually rotated rather than just printing in that order. Please attach the code as well as output in a pdf.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 3;
    int arr[n][n] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    for (int i = 0; i < n/2; i++) {
        for(int j = i; j < n-i-1; j++) {
            // Swapping elements in AntiCW
            int temp = arr[i][j];
            arr[i][j] = arr[j][n-i-1];
            arr[j][n-i-1] = arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1] = arr[n-j-1][i];
            arr[n-j-1][i] = temp;
        }
    }
    
    cout << "Rotated Matrix by 90 degree AntiCW:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    
    return 0;
}
