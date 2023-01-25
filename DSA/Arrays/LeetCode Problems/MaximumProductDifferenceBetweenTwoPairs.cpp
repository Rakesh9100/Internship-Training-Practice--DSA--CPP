// 1913. Maximum Product Difference Between Two Pairs
// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int nums[n];
    
    cout << endl << "Please enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums+n);
    cout << endl << "Maximum product difference is: " << (nums[n-1]*nums[n-2] - nums[0]*nums[1]) << endl;
    return 0;
    
}

// Time Complexity : O(n*logn)
