/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> s;
        ListNode *ptr=headA;
        while(ptr!=NULL) {
            s.insert(ptr);
            ptr=ptr->next;
        }
        ptr=headB;
        while(ptr!=NULL) {
            if(s.find(ptr)!=s.end()) return ptr;
            ptr=ptr->next;
        }
        return NULL;
    }
};