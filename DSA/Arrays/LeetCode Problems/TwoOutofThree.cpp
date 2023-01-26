// 2032. Two Out of Three
// https://leetcode.com/problems/two-out-of-three/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums1;
    vector<int> nums2;
    vector<int> nums3;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums1.push_back(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        nums2.push_back(x);
    }

    int o;
    cin >> o;
    for (int i = 0; i < o; i++) {
        int x;
        cin >> x;
        nums3.push_back(x);
    }

    // v1, v2, v3 are vectors for storing the count that is frequency of the elements
    vector<int> v1(101), v2(101), v3(101);
    for (int i = 0; i < nums1.size(); i++) {
        v1[nums1[i]] = 1;
    }

    for (int i = 0; i < nums2.size(); i++) {
        v2[nums2[i]] = 1;
    }

    for (int i = 0; i < nums3.size(); i++) {
        v3[nums3[i]] = 1;
    }

    vector<int> ans;
    for (int i = 0; i <= 100; i++) {
        if (v1[i] + v2[i] + v3[i] >= 2)
        ans.push_back(i);
    }

    for (auto i:ans) {
        cout << i << " ";
    }
    return 0;

}
