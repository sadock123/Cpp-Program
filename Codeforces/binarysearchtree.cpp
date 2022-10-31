//program to implement binary search tree  
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node (int val){
        data=val;
        left=NULL;
        right= NULL;
    }

};
Node* insert(Node* root, int val){
    if (root==NULL){
        return new Node(val);
    }
    if (val < root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right= insert(root->right,val);
    }
    return root;
}
Node* searchBST(Node* root,int key){
    if (root==NULL){ 
        return NULL;
    }
    if (root->data == key){
        return root;
    }
    if (root->data > key){
        searchBST(root->left,key);
    }
    searchBST(root->right,key);
}
void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *root= NULL;
    root= insert(root,4);
    insert(root,2);
    insert(root,3);
    insert(root,1);
    insert(root,5);
    insert(root,6);
    insert(root,7);
    inorder(root);
    cout<< endl;
    if (searchBST(root,5)){
        cout <<"found";

    }
    else{
        cout <<"not Found";
    }
    return 0;
}