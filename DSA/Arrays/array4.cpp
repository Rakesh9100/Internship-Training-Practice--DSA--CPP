// Program to print the sum of even and odd numbers in an array

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, odd = 0, even = 0;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << endl << "Please enter the elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even += arr[i];
        }
        else {
            odd += arr[i];
        }
    }
    cout << endl << "Sum of even numbers in the array is: " << even << endl;
    cout << endl << "Sum of odd numbers in the array is: " << odd << endl;
    return 0;

}
