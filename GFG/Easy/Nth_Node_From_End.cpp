
//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(struct Node *head, int n)
{
    struct Node *front = head;
    struct Node *back = head;
    int count = 0;
    if(head != NULL){
        while(count<n){
            if(front == NULL){
                return -1;
            }
            front = front->next;
            count++;
        }
        while(front != NULL){
            front = front->next;
            back = back->next;
        }
    }
    return back->data;
}