// 151. Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/

// break the words
// store in vector
// then print in reverse order

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	vector<string> v;
	string str = "";
	
    for (int i = 0; i < s.size(); i++) {
	    if (s[i] == ' ') {
	        v.push_back(str);
	        str = "";
	    }
	    else {
	        str += s[i];
	    }
	}

	v.push_back(str);
	reverse(v.begin(), v.end());
	
    for (int i = 0; i < v.size(); i++) {
	    cout << v[i] << " ";
	}
	return 0;

}
