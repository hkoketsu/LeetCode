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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> ptrs;
        while (head != nullptr) {
            if (find(ptrs.begin(), ptrs.end(), head) != ptrs.end()) return true;
            ptrs.push_back(head);
            head = head->next;
        }
        return false;
    }
};