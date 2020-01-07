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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        int carry = 0;
        while (ptr1 || ptr2 || carry) {
            int digitSum = carry;
            if (ptr1) {
                digitSum += ptr1->val;        
                ptr1 = ptr1->next;
            }
            if (ptr2) {
                digitSum += ptr2->val;
                ptr2 = ptr2->next;
            }
            carry = digitSum / 10;
            
            ptr->next = new ListNode(digitSum % 10);
            ptr = ptr->next;
        }
        return ans->next;
    }
};