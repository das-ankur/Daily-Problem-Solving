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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        queue<ListNode *> less_part;
        queue<ListNode *> great_part;
        ListNode *ptr=head;
        while(ptr!=NULL) {
            if(ptr->val<x) less_part.push(ptr);
            else great_part.push(ptr);
            ptr=ptr->next;
        }
        ListNode *res=NULL,*last=NULL;
        while(!less_part.empty()) {
            if(last==NULL) {
                last=less_part.front();
                res=last;
            }
            else  {
                last->next=less_part.front();
                last=last->next;
            }
            cout<<last->val<<endl;
            less_part.pop();
        }
        while(!great_part.empty()) {
            if(last==NULL)  {
                last=great_part.front();
                res=last;
            }
            else  {
                last->next=great_part.front();
                last=last->next;
            }
            cout<<last->val<<endl;
            great_part.pop();
        }
        last->next=NULL;
        return res;
    }
};