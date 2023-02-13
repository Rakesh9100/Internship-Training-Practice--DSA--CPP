// 160. Intersection of Two Linked Lists
// https://leetcode.com/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int length (ListNode* root) {
        int len = 0;
        while (root != NULL) {
            len++;
            root = root -> next;
        }
        return len;
    }

    ListNode *getIntersectionNode (ListNode *headA, ListNode *headB) {
        int n = length(headA);
        int m = length(headB);
        
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        
        int diff = abs(n - m);
        if (n > m) {
            while (diff > 0) {
                temp1 = temp1 -> next;
                diff--;
            }
        }
        else {
            while (diff > 0) {
                temp2 = temp2 -> next;
                diff--;
            }
        }
        
        while (temp1 != NULL) {
            if (temp1 == temp2) {
                return temp1;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return NULL;
    }  
};
