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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        int count=0;
        ListNode *ptr=head;
        while(ptr!=NULL) {
            count++;
            ptr=ptr->next;
        }
        int mid=count/2;
        ptr=head;
        while(mid!=0) {
            ptr=ptr->next;
            mid--;
        }
        return ptr;
    }
};