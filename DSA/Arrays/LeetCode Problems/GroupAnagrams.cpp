// 49. Group Anagrams
// https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<string> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ump;
    
    for (int i = 0; i < n; i++) {
        string s = v[i];
        sort (v[i].begin(), v[i].end());
        ump[v[i]].push_back(s);
    }
    
    for (auto i:ump) {
        ans.push_back(i.second);
    }
    
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
