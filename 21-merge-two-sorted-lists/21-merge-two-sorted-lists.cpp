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
    struct ListNode* insertNode(struct ListNode *res, struct ListNode *newnode) {
        struct ListNode *ptr=res;
        if(ptr==NULL)
            res=newnode;
        else {
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
        }
        return res;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        ListNode *res=NULL;
        ListNode *ptr1=list1, *ptr2=list2;
        while(ptr1!=NULL && ptr2!=NULL) {
            if(ptr1->val<ptr2->val) {
                struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
                newnode->val=ptr1->val;
                newnode->next=NULL;
                res=insertNode(res, newnode);
                ptr1=ptr1->next;
            }
            else {
                struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
                newnode->val=ptr2->val;
                newnode->next=NULL;
                res=insertNode(res, newnode);
                ptr2=ptr2->next;
            }
        }
        while(ptr1!=NULL) {
            struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=ptr1->val;
            newnode->next=NULL;
            res=insertNode(res, newnode);
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL) {
            struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=ptr2->val;
            newnode->next=NULL;
            res=insertNode(res, newnode);
            ptr2=ptr2->next;
        }
        return res;
    }
};