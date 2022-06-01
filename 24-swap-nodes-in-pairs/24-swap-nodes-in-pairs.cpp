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
    void helper(ListNode *ptr) {
        if(ptr==NULL || ptr->next==NULL)
            return;
        int temp=ptr->val;
        ptr->val=ptr->next->val;
        ptr->next->val=temp;
        helper(ptr->next->next);
    }
    ListNode* swapPairs(ListNode* head) {
        helper(head);
        return head;
    }
};