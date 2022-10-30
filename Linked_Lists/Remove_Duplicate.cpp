

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    struct Node* current = head;
    while (current->next != NULL)       
    {
        if (current->data == current->next->data){
            current->next = current->next->next;
        }
        else{
           current = current->next; 
        }
    }
    return head;
}