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
    void reorderList(ListNode* head) {
        if(head->next==NULL)
            return;
        int node_count=0;
        ListNode *ptr=head;
        while(ptr!=NULL) {
            node_count++;
            ptr=ptr->next;
        }
        ptr=head;
        for(int i=0;i<node_count/2-1;i++)
            ptr=ptr->next;
        if(node_count%2==1)
            ptr=ptr->next;
        ListNode *sptr=ptr->next;
        ptr->next=NULL;
        ListNode *prev=NULL;
        while(sptr!=NULL) {
            ListNode *next_node=sptr->next;
            sptr->next=prev;
            prev=sptr;
            sptr=next_node;
        }
        sptr=prev;
        ptr=head;
        while(sptr!=NULL) {
            ListNode *temp=sptr;
            sptr=sptr->next;
            temp->next=ptr->next;
            ptr->next=temp;
            ptr=ptr->next;
            ptr=ptr->next;
        }
    }
};