// 2535. Difference Between Element Sum and Digit Sum of an Array
// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int nums[n];

    cout << endl << "Please enter elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int se = 0, sd = 0; // se = sum of elements, sd = sum od digits
    
    for (int i = 0; i < n; i++) {
        se += nums[i];
        while (nums[i] != 0) {
            sd += (nums[i] % 10);
            nums[i] /= 10;
        }
    }
    cout << endl << "Absolute difference is: " << abs(sd - se) << endl;
    return 0;

}

// Time Complexity: O(n)
