// Given a 2D array matrix whose every row and every column is sorted. Program to check whether k is present in the matrix or not

/*

K = 12
Input:
1  4  8
2  7  9
10 12 13
Output:
Yes

// 3 approaches:

1. Brute-Force approach, TC: O(n^2)
// Algorithm:
for (int i = 0; i < n; i++)
    for()
        if (arr[i][j] == k)
            flag = true
            cout << "Yes";

2. Binary Search , TC: O(nlogn)

3. Some observations, TC: O(n)

*/

/* 

Binary Search Approach-> O(nlogn)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int r = 3, c = 3;
    int k = 9;
    int arr[r][c] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    
    // for the starting points of the first column
    
    bool flag = false;
    for (int i = 0; i < r; i++) {
        // now arr[i] is my array where I have to apply binary search
        // [1,2,3]
        int start = 0, end = c-1;
        
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[i][mid] == k) {
                flag = true;
                break;
            }
            else if (arr[i][mid] > k) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        
        if (flag == true) {
            break;
        }
    }
    
    if (flag == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;

}

*/

// Approach with TC: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int r = 3, c = 3;
    int k = 25;
    int arr[r][c] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    
    //for the starting points of the first column
    
    bool flag = false;
    int i = 0, j = c-1;

    while (i < r and j >= 0) {
        if (arr[i][j] == k) {
            flag = true;
            break;
        }
        else if (arr[i][j] > k) {
            j--;
        }
        else {
            i++;
        }
    }
    
    if (flag == true) {
        cout << "Yes";
    }
    else {
        cout<<"No";
    }
    return 0;

}
