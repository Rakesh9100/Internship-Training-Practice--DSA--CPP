// 1475. Final Prices With a Special Discount in a Shop
// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int prices[n];
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                prices[i] -= prices[j];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    return 0;

}
