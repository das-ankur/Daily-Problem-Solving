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
    ListNode *reverse(ListNode *head) {
        ListNode *prev=NULL, *curr=head, *next=NULL;
        while(curr!=NULL) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        ListNode *curr=head,*next=NULL,*res=head,*prev=NULL;
        int reverseCount=0;
        while(curr!=NULL) {
            ListNode *start=curr;
            for(int i=1;i<k && curr!=NULL;i++) {
                curr=curr->next;
            }
            if(curr==NULL) break;
            ListNode *end=curr;
            curr=curr->next;
            end->next=NULL;
            if(prev!=NULL) prev->next=NULL;
            ListNode *curHead=reverse(start);
            start->next=curr;
            if(prev!=NULL) prev->next=end;
            if(reverseCount==0) res=curHead;
            reverseCount++;
            prev=start;
        }
        return res;
    }
};