// Given N steps. We can jump 1 step, 2 step, and 3 steps to reach Nth step. Find the number of ways required to reach the Nth step.

#include <bits/stdc++.h>
using namespace std;

int stairs (int steps) {
    
    if (steps == 1 || steps == 2) {
        return 1;
    }
    else if (steps == 3) {
        return 2;
    }
    else {
        return stairs(steps - 1) + stairs(steps - 2) + stairs(steps - 1);
        }
    }

int main() {
    
    int steps = 5;
    cout << "Count of ways to reach the nth stair using step 1, 2 or 3 are: " << stairs(steps);
    return 0;

}
