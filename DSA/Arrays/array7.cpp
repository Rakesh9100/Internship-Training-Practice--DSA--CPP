// Program to check whether there is triplet of elements whose sum is equal to k or not in a sorted array

#include <bits/stdc++.h>
using namespace std; // 1 8 17

int main() {
    
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 13, 14, 17};

    int k = 18;
    bool flag = false;

    for (int i = 0; i < n; i++) {

        int start = i + 1;
        int end = n - 1;
        int req_sum = k - arr[i];

        while (start < end) {
            int currsum = arr[start] + arr[end];

            if (currsum > req_sum) {
                end--;
            }
            else if (currsum < req_sum) {
                start++;
            }
            else {
                cout << "Positions which form triplet are: " << i << " " << start << " " << end << endl;
                flag = true;
                break;
            }
        }
    }
    
    if (flag == true) {
        cout << endl << "Yes, there is a triplet for " << k;
    }
    else {
        cout << "No triplet for " << k;
    }
    return 0;

}
