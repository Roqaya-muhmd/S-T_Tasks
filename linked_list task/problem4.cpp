/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* first = head;
        ListNode* prev = NULL;

        while (first != nullptr) {
            ListNode* N_node = first->next;
            first->next = prev;
            prev = first;
            first = N_node;
        }

        return prev;
    }
};