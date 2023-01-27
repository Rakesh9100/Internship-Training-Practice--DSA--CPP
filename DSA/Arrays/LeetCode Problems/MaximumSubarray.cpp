// 53. Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/

#include <bits./stdc++.h>
using namespace std;

int main() {

    int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
	    cin >> a[i];
	}

	int max_ending_here = 0, max_so_far = INT_MIN;
	int left, right;
    for (int i = 0; i < n; i++) {
	    max_ending_here += a[i];
	    if (max_ending_here < a[i]) {
	        max_ending_here = a[i];
	        left = i;
	    }
	    
        if (max_so_far < max_ending_here) {
	        max_so_far = max_ending_here;
	        right = i;
	    }
	}

	cout << max_so_far << endl;
	for (int i = left; i <= right; i++) {
	    cout << a[i] << " ";
	}
	return 0;

}
