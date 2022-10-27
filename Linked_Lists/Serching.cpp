//This code contains only the function to be used for searching in Linked lists

// Search a node
bool searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL){
    if(current->data == key){
        return true;
    }
    current = current->next;
  }
  return false;
}