
/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head == NULL || head->next == NULL){
            return false;
        }
        // your code here
        Node* slow = head;
        Node* fast = head;
        fast = fast->next;
        while(fast!=NULL && fast->next!=NULL){
            if(slow == fast){
                return true;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};