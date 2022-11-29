/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) {
            Node *res=new Node(head->val);
            if(head->random==NULL) res->random=NULL;
            else res->random=res;
            return res;
        }
        unordered_map<Node *, Node *> m;
        Node *res=new Node(0), *ptr=head, *rptr=res;
        while(ptr!=NULL) {
            rptr->next=new Node(ptr->val);
            rptr=rptr->next;
            m[ptr]=rptr;
            ptr=ptr->next;
        }
        ptr=head;
        rptr=res->next;
        while(ptr!=NULL) {
            rptr->random=m[ptr->random];
            ptr=ptr->next;
            rptr=rptr->next;
        }
        return res->next;
    }
};