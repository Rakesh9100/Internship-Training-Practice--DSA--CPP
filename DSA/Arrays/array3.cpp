// Program to count the number of prime numbers in the array

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
        bool is_prime = true;
        
        for (int j = 2; j <= arr[i]/2; j++) {
            if (arr[i] % j == 0) {
                is_prime = false;
            }
        }
        
        if (arr[i] > 1 && is_prime == true) {
                count++;
            }
    }
    cout << endl << "Number of prime numbers in the array is: " << count << endl;
    return 0;

}
