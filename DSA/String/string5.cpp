// Program to state the occurrences of each character in a string

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "abcbcbaaa";
    int n = s.size();
    vector<int> v(26);
    
    for (int i = 0; i < n; i++) {
        v[s[i] - 'a']++;
    }
   
    for (int i = 0; i < 26; i++) {
        if (v[i] > 0) {
            char ch = i + 'a';
            cout << ch << " " << v[i] << endl;
        }
    }
    return 0;
    
}
