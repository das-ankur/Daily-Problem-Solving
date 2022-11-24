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
    ListNode *merge(ListNode *left, ListNode *right) {
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode *ptr=NULL, *head=NULL;
        while(left!=NULL && right!=NULL) {
            if(left->val<right->val) {
                if(ptr==NULL) head=ptr=left;
                else {
                    ptr->next=left;
                    ptr=left;
                }
                left=left->next;
            }
            else {
                if(ptr==NULL) head=ptr=right;
                else {
                    ptr->next=right;
                    ptr=right;
                }
                right=right->next;
            }
        }
        if(left!=NULL) ptr->next=left;
        if(right!=NULL) ptr->next=right;
        return head;
    }
    ListNode *findMid(ListNode *head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *mid=findMid(head);
        ListNode *left=head;
        ListNode *right=mid->next;
        mid->next=NULL;
        left=sortList(left);
        right=sortList(right);
        ListNode *res=merge(left,right);
        return res;
    }
};