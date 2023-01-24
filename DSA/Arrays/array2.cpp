// Program to count the number of even numbers in an array

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, count = 0;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << endl << "Please enter the elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    cout << endl << "Number of even numbers in the array is: " << count << endl;
    return 0;

}
