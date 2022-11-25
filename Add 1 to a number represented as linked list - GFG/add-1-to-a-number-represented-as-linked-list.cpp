//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    /*
    // Reverse Linked List
    Node *reverse(Node *head) {
        Node *prev=NULL, *curr=head, *next=NULL;
        while(curr!=NULL) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        int carry=0;
        Node *ptr=head, *preptr=head;
        while(ptr!=NULL) {
            preptr=ptr;
            int temp=ptr->data+carry;
            if(ptr==head) temp++;
            carry=temp/10;
            ptr->data=temp%10;
            ptr=ptr->next;
        }
        if(carry==1) preptr->next=new struct Node(carry);
        return reverse(head);
    }
    */
    // Recursive Implementation
    int helper(Node *head) {
        if(head==NULL) return 1;
        int temp=head->data+helper(head->next);
        head->data=temp%10;
        return temp/10;
    }
    Node* addOne(Node *head) {
        int carry=helper(head);
        if(carry==1) {
            Node *newnode=new Node(carry);
            newnode->next=head;
            head=newnode;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends