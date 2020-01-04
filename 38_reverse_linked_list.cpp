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
    ListNode* reverseList(ListNode* head) {
        return reverse(head, NULL);
    }
    
    ListNode* reverse(ListNode* node, ListNode* prev) {
        if (!node) return NULL;
        ListNode* next = node->next;
        node->next = prev;
        return next ? reverse(next, node) : node;
    }
};