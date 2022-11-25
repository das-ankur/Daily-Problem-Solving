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
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        int carry=0;
        ListNode *dummy=new ListNode(-1);
        ListNode *ptr1=l1, *ptr2=l2, *head=dummy, *tail=dummy;
        while(ptr1!=NULL && ptr2!=NULL) {
            int temp=ptr1->val+ptr2->val+carry;
            carry=temp/10;
            temp%=10;
            tail->next=new ListNode(temp);
            tail=tail->next;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1!=NULL) {
            int temp=ptr1->val+carry;
            carry=temp/10;
            temp%=10;
            tail->next=new ListNode(temp);
            tail=tail->next;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL) {
            int temp=ptr2->val+carry;
            carry=temp/10;
            temp%=10;
            tail->next=new ListNode(temp);
            tail=tail->next;
            ptr2=ptr2->next;
        }
        if(carry==1) tail->next=new ListNode(carry);
        return head->next;
    }
};