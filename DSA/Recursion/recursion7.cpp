/*
0-1 Knapsack Problem using recursion:-

We are given a set of items, each with a weight and a value, and we need to determine the number of each 
item to include in a collection so that the total weight is less than or equal to a given limit and the total value 
is as large as possible.

Please note that the items are indivisible; we can either take an item or not (0-1 property). For example,

Sample Test Case 1:
Input:

value = [ 20, 5, 10, 40, 15, 25 ]
weight = [ 1, 2, 3, 8, 7, 4 ]
W = 10
 
Output:  60
 
value = 20 + 40 = 60
weight = 1 + 8 = 9 < W

Sample Test Case 2:
value = [60,100,120]
weight= [10,20,30]
W=50

Output: 220

The maximum value obtained from ‘N’ items is the max of the following two values. 

Maximum value obtained by N-1 items and W weight (excluding ith item)

Value of ith item plus maximum value obtained by N-1 items and W minus the weight of the ith item (including ith item)

If the weight of the ‘ith’ item is greater than ‘W’, then the ith item cannot be included and Case 1 is the only
possibility.
*/


#include <bits/stdc++.h>
using namespace std;

int knapsack(int w, int wt[], int val[], int n) {
    // base case
    if (n == 0 || w == 0) {
        return 0;
    }
    
    // if the weight of nth item is more than capacity of bag then it can not be included in the bag
    if (wt[n-1] > w) {
        return knapsack(w, wt, val, n - 1);
    }
    
    /* return the maximum of two cases
       (1) nth item is included
       (2) nth item is not included
    */
    else{
        return max (val[n-1] + knapsack(w - wt[n-1], wt, val, n-1) , knapsack(w, wt, val, n-1));
    }

}
int main() {
    
    int n, w; // n is the number of items and w is the capacity of the bag
	cin >> n >> w;
	int wt[n], val[n];
	
    for (int i = 0; i < n; i++){
        cin >> wt[i];
    }
	
    for (int i = 0;i < n; i++){
        cin >> val[i];
    }
	cout << knapsack(w, wt, val, n) << endl;
	return 0;

}

// Time Complexity: O(2^n)
