// Program to check whether sum is equal to k or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 5;
    int arr[n] = {5, 10, 15, 20, 25};

    int k = 45;
    bool flag = false;

    for (int i = 0; i <= n; i++) {

        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                cout << "Yes" << " " << endl;
                flag = true;
                break;
            }
        }
        if (flag == true) {
            break;
        }
    }
    if (flag == false) {
        cout << "No";
    }
    return 0;

}
