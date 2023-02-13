// 51. N-Queens
// https://leetcode.com/problems/n-queens/description/

// Queens in same row , same column , same diagonal can only attack each other

#include <bits/stdc++.h>
using namespace std;

bool issafe(int row,int col,vector<string>board,int n) {
    
    int duprow = row;
    int dupcol = col;
    
    // Check upper diagonal
    while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
        return false;
        row--;
        col--;
    }
    
    // Check current row from starting till now
    col = dupcol;
    row = duprow;
    while (col >= 0) {
        if (board[row][col] == 'Q')
        return false;
        col--;
    }

    // Check lower diagonal
    row = duprow;
    col = dupcol;
    while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
        return false;
        row++;
        col--;
    }
    return true;

}

void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n) {
    
    if (col == n) {
        ans.push_back(board);
        return;
    }
    
    for (int row = 0; row < n; row++) {
        if (issafe(row, col, board, n)) {
            board[row][col] = 'Q';
            solve (col + 1, board, ans, n);
            board[row][col] = '.';
        }
    }
}

int main() {
    
    int n; 
    cin >> n;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++) {
        board[i]=s;
    }
    
    vector<vector<string>> ans;
    solve(0, board, ans, n);
    for (int i = 0; i < ans.size(); i++) {
        cout << "Arrangement " << i+1 << endl; 
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(N! * N)
// Space Complexity: O(N^2)
