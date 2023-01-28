// 205. Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        vector<int> a(127, -1), b(127, -1);
        // a is the vector where index will be s[i] and value will be t[i] ; s->t
        // b : t[i] as the index and s[i] as the value: t->s
        
        for (int i = 0; i < s.size(); i++) {
            // case-1
            // when both are new
            if (a[s[i]] == -1 and b[t[i]] == -1) {
                a[s[i]] = t[i];
                b[t[i]] = s[i];
            }
            
            // case-2
            // when s[i] is new, but not t[i]
            else if (a[s[i]] == -1 and b[t[i]] != -1) {
                return false;
            }
            
            // case-3
            // when t[i] is new, but not s[i]
            else if (a[s[i]] != -1 and b[t[i]] == -1) {
                return false;
            }
            
            // case-4
            // when both of them have appeared previously
            else {
                if (a[s[i]] != t[i] or b[t[i]] != s[i]) {
                    return false;
                }
            }
        }
        
        return true;

    }
};

// Time Complexity: O(n)
// Space COmplexity: O(127)
