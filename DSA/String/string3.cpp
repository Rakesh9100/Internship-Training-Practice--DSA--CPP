// Given two strings s & t. Program to find whethere string s is a subsequence of string t or not

/*
Example:

Input1:
s -> abc
t -> adebfcg
Output:
Yes

Input2:
s -> abc
t -> adefgh
Output:
No
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "abc";
    string t = "adfgbkjcf";
    
    int i = 0, j = 0;
    int n = s.size(), m = t.size();
    
    while (i < n and j < m) {
        cout << i << " " << j << endl;
        if (s[i] == t[j]) {
            i++, j++;
        }
        else {
            j++;
        }
    }
    
    if (i == n) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
    
}
