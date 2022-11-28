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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL) return head;
        int len=1;
        ListNode *lastNode=head;
        while(lastNode->next!=NULL) {
            lastNode=lastNode->next;
            len++;
        }
        k%=len;
        if(k==0) return head;
        ListNode *slow=head, *fast=head;
        while(k!=0) {
            fast=fast->next;
            k--;
        }
        while(fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *newHead=slow->next;
        slow->next=NULL;
        lastNode->next=head;
        return newHead;
    }
};