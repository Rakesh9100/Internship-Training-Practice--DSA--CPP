// Rat in a Maze problem
// Rat can moce right and down directions.

#include <bits/stdc++.h>
using namespace std;

bool helper(vector<vector<int>> &grid, int x, int y) {
    
    // base cases
    if (x == 4 or y == 4) {
        return false;
    }
    
    if (grid[x][y] == 1) {
        return false;
    }
    
    if (x == 3 and y == 3) {
        grid[x][y] = 2;
        return true;
    }
    
    grid[x][y] = 2;
    // calls
    bool r = helper(grid, x, y + 1); // r = right
    if (r == true) {
        return true;
    }
    
    bool d = helper(grid, x+1, y); // d = down
    
    // returning from the function
    if (d == true) {
        return true;
    }
    else {
        grid[x][y] = 0;   //backtracking step
        return false;
    }
}

int main() {
    
    // eg 4x4, 0->cell is empty and 1 will denote that the cell is blocked
    // 0 1 0 0
    // 0 0 0 1
    // 1 1 0 0
    // 1 0 0 0
    
    vector<vector<int>> grid = {{0, 1, 0, 0}, {0, 0, 0, 1}, {1, 1, 1, 1}, {1, 0, 0, 0}};
    bool ans = helper(grid, 0, 0);
    if (ans == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
