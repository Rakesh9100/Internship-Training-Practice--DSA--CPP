// 1827. Minimum Operations to Make the Array Increasing
// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int count = 0;
    
    for (int i = 0; i < n-1; i++) {
        if (nums[i] < nums[i+1]) {
            continue;
        }
        else {
            count += (nums[i] - nums[i+1] + 1);
            nums[i+1] = nums[i] + 1;
        }
    }
    cout << count << endl;
    return 0;

}
