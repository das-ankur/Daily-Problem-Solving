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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *ptr=head, *odrptr=head;
        while(ptr!=NULL && ptr->next!=NULL && ptr->next->next!=NULL) {
            ListNode *preptr=ptr->next;
            ptr=ptr->next->next;
            preptr->next=ptr->next;
            ptr->next=odrptr->next;
            odrptr->next=ptr;
            odrptr=ptr;
            ptr=preptr;
        }
        return head;
    }
};