// Program to generate all the subsequences of a string

#include <bits/stdc++.h>
using namespace std;

void helper (int idx, string temp, string s) {

    if (idx == s.size()) {
        cout << temp << endl;
        return;
    }
    
    //option2- leave the character
    helper(idx + 1, temp, s);    
    
    //option1- take the character
    temp += s[idx];
    helper(idx + 1, temp, s);
}

int main() {
    
    string s = "abcd";
    string temp = "";
    helper(0, temp, s);
    return 0;

}
