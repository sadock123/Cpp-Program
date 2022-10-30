structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/
#include <bits/stdc++.h>

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        //base case
        if(!head){
            return;
        }
        Node* slow = head;
        Node* fast = head->next;
        while(fast!=slow){
            if(fast == NULL || fast->next==NULL){
                return;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        int s = 1;
        fast = fast->next;
        while(slow!=fast){
            s++;
            fast = fast->next;
        }
        slow = head;
        fast = head;
        for(int i=0;i<s-1;i++){
            fast = fast->next;
        }
        while(fast->next != slow){
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = NULL;
    }
};