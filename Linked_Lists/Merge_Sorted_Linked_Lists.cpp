
 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* head = NULL;
    Node* tail = NULL;
    Node* a = head1;
    Node* b = head2;
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a; 
    }
    
    if(a->data <= b->data){
        head = a;
        tail = a;
        a = a->next;
    }
    else{
        head = b;
        tail = b;
        b = b->next;
    }
    
    while(a!=NULL && b!=NULL){
        if(a->data <= b->data){
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else{
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a==NULL){
        tail->next = b;
    }
    else{
        tail->next = a;
    }
    return head;
}  