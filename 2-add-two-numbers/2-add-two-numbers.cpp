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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1=l1, *ptr2=l2, *res=NULL, *last=NULL;
        int carry=0;
        while(ptr1!=NULL && ptr2!=NULL) {
            int temp=ptr1->val+ptr2->val+carry;
            carry=temp/10;
            temp=temp%10;
            ListNode *node=new ListNode(temp);
            if(res==NULL) {
                res=node;
                last=node;
            }
            else {
                last->next=node;
                last=node;
            }
            node=NULL;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        if(ptr1==NULL) {
            while(ptr2!=NULL) {
                int temp=ptr2->val+carry;
                carry=temp/10;
                temp=temp%10;
                ListNode *node=new ListNode(temp);
                if(res==NULL) {
                    res=node;
                    last=node;
                }
                else {
                    last->next=node;
                    last=node;
                }
                node=NULL;
                ptr2=ptr2->next;
            }
        }
        if(ptr2==NULL) {
            while(ptr1!=NULL) {
                int temp=ptr1->val+carry;
                carry=temp/10;
                temp=temp%10;
                ListNode *node=new ListNode(temp);
                if(res==NULL) {
                    res=node;
                    last=node;
                }
                else {
                    last->next=node;
                    last=node;
                }
                node=NULL;
                ptr1=ptr1->next;
            }
        }
        if(carry>0) {
            ListNode *node=new ListNode(carry);
                if(res==NULL) {
                    res=node;
                    last=node;
                }
                else {
                    last->next=node;
                    last=node;
                }
        }  
        return res;
    }
};