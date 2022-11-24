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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode *fast=head->next, *slow=head->next, *preptr=head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            preptr=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        preptr->next=slow->next;
        delete slow;
        return head;
    }
};