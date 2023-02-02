// Program to print Fibonacci Series

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    
    if (n==1||n==0) {
        return(n);
    }
    else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main() {

    int n, i = 0;
    cout << "Please enter the number of terms: ";
    cin >> n;
    cout << endl << "Fibonnaci Series upto " << n << " terms: " << endl;
    
    while (i < n) {
        cout << fibonacci(i) << " ";
        i++;
    }
    return 0;

}
