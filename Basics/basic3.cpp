// LeftShift and RightShift Operator

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5, b = 9;

    // a = 5 (00000101), b = 9 (00001001)
    cout << "Values after applying Leftshift operator on a and b: " << endl;
    cout <<  (a << 1) << " " << (b << 2) << endl;
    // (00001010) and (00100100)
    
    cout << endl << "Values after applying Rightshift operator on a and b: " << endl;
    cout <<  (a >> 1) << " " << (b >> 2) << endl;
    // (00000010) and (00000010)
    return 0;
    // x << y = x*(2^y) and x >> y = x/(2^y)

}
