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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        unordered_set<ListNode*> s;
        ListNode *ptr=head;
        while(ptr->next!=NULL) {
            if(s.find(ptr)!=s.end()) return true;
            s.insert(ptr);
            ptr=ptr->next;
        }
        return false;
    }
};