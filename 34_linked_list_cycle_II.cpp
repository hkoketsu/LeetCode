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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;
        
        ListNode *fast = head, *slow = head;
        while (fast->next && fast->next->next) {
            fast =  fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                ListNode *ans = head;
                while (ans != slow) {
                    ans = ans->next;
                    slow = slow->next;
                }
                return ans;
            }
        }
        return nullptr;
    }
};