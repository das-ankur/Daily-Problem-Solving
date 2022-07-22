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
        // Using two queues
        if(head==NULL || head->next==NULL)
            return head;
        queue<ListNode *> less_part;
        queue<ListNode *> great_part;
        ListNode *ptr=head;
        // Put all the elements which are less than x in less_part
        // Put all the elements which are greater than x in great_part
        while(ptr!=NULL) {
            if(ptr->val<x) less_part.push(ptr);
            else great_part.push(ptr);
            ptr=ptr->next;
        }
        // Create two pointr
        // res will point the first node of the result
        // last will point the last node the last node of the result throughout the execution 
        ListNode *res=NULL,*last=NULL;
        // As we need elements less than x at the beginning of the list
        // then first insert the elements of the less_part in FIFO order
        while(!less_part.empty()) {
            if(last==NULL) {
                last=less_part.front();
                res=last;
            }
            else  {
                last->next=less_part.front();
                last=last->next;
            }
            less_part.pop();
        }
        // As we need elements greater than or equal to x at the end of the list
        // then insert the elements of great_part
        while(!great_part.empty()) {
            if(last==NULL)  {
                last=great_part.front();
                res=last;
            }
            else  {
                last->next=great_part.front();
                last=last->next;
            }
            great_part.pop();
        }
        last->next=NULL;
        return res;
    }
};