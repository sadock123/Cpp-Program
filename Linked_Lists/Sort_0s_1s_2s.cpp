 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zero = 0;
        int one = 0;;
        int two = 0;
        Node* p = head;
        while(p!=NULL){
            if(p->data == 0){
                zero++;
            }
            if(p->data == 1){
                one++;
            }
            if(p->data == 2){
                two++;
            }
            p=p->next;
        }
        Node* q = head;
        while(q!=NULL){
            while(zero!=0){
                q->data = 0;
                zero--;
                q=q->next;
            }
            while(one!=0){
                q->data = 1;
                one--;
                q=q->next;
            }
            while(two!=0){
                q->data = 2;
                two--;
                q=q->next;
            }
        }
        return head;
    }
};