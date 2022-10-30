
// Function to search a struct node in BST.
bool search(struct Node* root, int x) {
    if(root==NULL)
    {
        return 0;
    }
    else if (root->data == x)
    {
        return 1;
    }
    else if (root->data > x)
    {
        search(root->left,x);
    }
    else
    {
        search(root->right,x);
    }
}
