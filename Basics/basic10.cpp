// Program to calculate min amd max out of 3 given numbers using min-max function
// min and max function takes only two arguments
// We can do max(a, b) or min(a, b) but not max(a, b, c) or min(a, b, c)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c;
    cout << "Please enter first number: " << endl;
    cin >> a;
    cout << "Please enter second number:" << endl;
    cin >> b;
    cout << "Please enter third number: " << endl;
    cin >> c;

    // To get the max number
    int ans = max(max(a, b), c);
    cout << endl << ans << " is max number";
    
    int ans2 = min(min(a, b), c);
    cout << endl << ans2 << " is min number";
    return 0;

}
