// Program to take input as n elements of an array and find the min and max element

#include <bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cout << "Please enter size of the array: " << endl;
    cin >> size;

    int arr[size] = {0}; // Initialisation of all the elements of the array to 0
    cout << endl << "Please enter the elements: " << endl;
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // max of all
    int max_ele = INT_MIN; // min integer = -2^31
    for (int i = 0; i < size; i++) {
        if (arr[i] > max_ele) {
            max_ele = arr[i];
        }
    }
    cout << endl << "The max element is: " << max_ele << endl;

    // min of all
    int min_ele = INT_MAX; // max integer = 2^31-1
    for (int i = 0; i < size; i++) {
        if (arr[i] < min_ele) {
            min_ele = arr[i];
        }
    }
    cout << "The min element is: " << min_ele << endl;
    return 0;

}
