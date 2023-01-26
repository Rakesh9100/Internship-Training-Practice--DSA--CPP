// Program to count the appearance of character 'a' in a string

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "abgdfabhac";
    char check = 'a';
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] ==  check) {
            count++;
        }
    }

    cout << "Number of occurrence of " << check << " = " << count;
    return 0;

}
