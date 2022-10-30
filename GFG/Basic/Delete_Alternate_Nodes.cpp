
/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    
    //recursion
    // if(head == NULL || head->next == NULL){
    //     return;
    // }
    // Node* p = head;
    // Node* q = head->next;
    // p->next = q->next;
    // delete(q);
    // deleteAlt(head->next);
    
    //without recursion
    while(head && head->next){
        head->next = head->next->next;
        head = head->next;
    }
}