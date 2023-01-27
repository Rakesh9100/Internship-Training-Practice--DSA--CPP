// 1678. Goal Parser Interpretation
// https://leetcode.com/problems/goal-parser-interpretation/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string ans = "";
	
    for (int i = 0; i < s.size(); i++) {
	    if (s[i] == 'G') {
            ans += s[i];
        }
	    else if (s[i] == '(' && (i+1 < s.size()) && s[i+1] == ')') {
	        ans += 'o';
	        i++;
	    }
	    else {
	        ans += "al";
	        i += 3;
	    }
	}
	cout << ans << endl;
	return 0;

}
