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
        unordered_set<ListNode *> s;
        ListNode *ptr=head;
        while(ptr!=NULL) {
            if(s.find(ptr)!=s.end())
                return true;
            s.insert(ptr);
            ptr=ptr->next;
        }
        return false;
    }
};