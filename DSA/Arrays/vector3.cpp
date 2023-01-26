// Given a vector of size n. Arrange the vector in such a way that all the odd elements appear first and then the even elements. Also, among odd elements, the smaller ones should appear first and among even elements, the larger ones should appear first

//e.g 4 5 6 10 3 1-> 1 3 5 10 6 4

// Using comparator approach

#include <bits/stdc++.h>
using namespace std;

// bool cmp(int a, int b){
//     //wrt ascending order
    
//     if(a>=b){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

bool cmp (int a, int b) {
    // a -> odd, b -> odd
    if (a % 2 != 0 and b % 2 != 0) {
        // a, b
        if (a <= b) {
            return true;
        }
        else {
            return false;
        }
    }
    // b -> even, a -> even
    else if (a % 2 == 0 and b % 2 == 0) {
        //descending order
        if (a >= b) {
            return true;
        }
        else {
            return false;
        }
    }
    // a -> odd, b -> even
    else if (a % 2 != 0 and b % 2 == 0) {
        return true;
    }
    else {
        // a -> even, b -> odd
        return false;
    }
}

int main() {
    
    vector<int> arr = {4, 5, 6, 10, 3, 1};
    sort(arr.begin(), arr.end(), cmp);
    
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
            
    /*

    wrt ascending order
    a -> value which appears first, b -> appears later
    a <= b 
    8 3 -> swap/change
    
    if (a <= b) ---> no change required, all good
    
    if(a > b) ----> swap/change of the elements
    
    sorting algo will do a change only when comparator returns false
    
    */
    return 0;

}
