
struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* p = NULL;
        Node* q = head;
        while(q!=NULL){
            Node* temp = q->next;
            q->next = p;
            p = q;
            q = temp;
        }
        return p;
    }
    
};
    
