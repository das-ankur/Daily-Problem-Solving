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
    /*
    // Recursive
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
    }
    */
    /*
    // Practice 1
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
    }
    */
    // Iterative
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *cur_node=head, *prev_node=NULL, *next_node=NULL;
        while(cur_node!=NULL) {
            next_node=cur_node->next;
            cur_node->next=prev_node;
            prev_node=cur_node;
            cur_node=next_node;
        }
        return prev_node;
    }
};