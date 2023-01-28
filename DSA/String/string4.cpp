// Program to reverse the vowels of a string

/*
Example:

Input1:
abcefgid
Output:
ibcefgad

Input2:
leetcode
Output:
leotcede
*/

#include <bits/stdc++.h>
using namespace std;

using namespace std;

bool checkVowel(char x) {
    if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    string s = "leetcode";
    
    int n = s.size();
    int i = 0, j = n-1;
   
    while (i < j) {
        // if both are vowels, then swap
        // the one which is not the vowel, will be left unchanged
        bool val1 = checkVowel(s[i]);  // checking whether s[i] is vowel or not
        bool val2 = checkVowel(s[j]);
       
        if (val1 == true and val2 == true) {
            swap(s[i], s[j]);
            i++, j--;
        }
        else if (val1 == true and val2 == false) {
            j--;
        }
        else if (val1 == false and val2 == true) {
            i++;
        }
        else {
            i++, j--;
        }
    }
    cout<<s;
    return 0;

}
