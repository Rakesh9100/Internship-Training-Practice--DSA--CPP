// Program to arrange the elements of the array in such a order that odd elements appear first and then the even. Among odd, smaller number comes first and among even larger number comes first.

//e.g: arr = {6, 3, 4, 1, 2} -----> {1, 3, 6, 4, 2}

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr = {5, 8, 9, 7, 10};
    vector<int> odd, even;
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        }
        else {
            odd.push_back(arr[i]);
        }
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int> ());
    
    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }
    
    for(int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    return 0;

}
