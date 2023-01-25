// 2037. Minimum Number of Moves to Seat Everyone
// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int seats[n] , students[n];

    cout << endl << "Please enter the positions of seats: " << endl;
    for (int i = 0; i < n; i++) {
       cin >> seats[i];
    }
    
    cout << endl << "Please enter the positions of students: " << endl;
    for (int i = 0; i < n; i++) {
      cin >> students[i];
    }
    
    sort(seats, seats+n); 
    sort(students, students+n);
    int min_move = 0;
    
    for(int i = 0; i < n; i++) {
        min_move += abs(seats[i] - students[i]);
    }
    cout << endl << "Minimum number of moves is: " << min_move << endl;
    return 0;

}

// Time Complexity:  O(n*logn)
// Space Complexity: O(2*n)
