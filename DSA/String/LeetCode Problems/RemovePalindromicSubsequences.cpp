// 1332. Remove Palindromic Subsequences
// https://leetcode.com/problems/remove-palindromic-subsequences/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
	cin >> s;
	bool flag = true;
	int i = 0, j = s.size()-1;
	while (i < j) {
	    if (s[i] != s[j]) {
	        cout << "2" << endl;
	        flag = false;
	        break;
	    }
	    i++;
	    j--;
	}
	if (flag == true) {
	    cout << "1" << endl;
	}
	return 0;

}
