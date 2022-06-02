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
#include<bits/stdc++.h>
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr=head, *pre=head;
        while(ptr!=NULL) {
            ListNode *cur=ptr;
            ptr=ptr->next;
            if(cur==head && cur->val==val)
                head=head->next;
            else if(cur->val==val)
                pre->next=cur->next;
            else
                pre=cur;
        }
        return head;
    }
};