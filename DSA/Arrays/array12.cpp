// Program to rotate the 2D array matrix by 90 degree clockwise

// To rotate, matrix should be square matrix

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 3;
    int arr[n][n] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            swap(arr[i][j], arr[i][n-j-1]);
        }
   }
   
    cout << "Rotated Matrix by 90 degree CW:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
