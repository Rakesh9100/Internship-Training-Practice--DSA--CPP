// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int prices[n];

    cout << endl << "Please enter the prices elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int mgr[n]; // mgr[i] stores the maximum value from ith index to (n-1)th index
    int mx = 0;
    for(int i = n-1; i >= 0; i--) {
        mx = max(mx, prices[i]);
        mgr[i] = mx;
    }

    int max_profit = INT_MIN;
    for(int i = 0; i < n; i++) {
        max_profit = max(max_profit, mgr[i] - prices[i]);
    }
    cout << endl << "Maximum Profit is: " << max_profit << endl;
    return 0;

}

// Time Complexity: O(n)
