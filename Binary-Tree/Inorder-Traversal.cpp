//Function to implement the Inorder-Traversal in Binary tree
#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node *left, *right;
};


Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}

int main(){

    struct Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);

    //Function call
    cout<<"The Inorder traversal in tree is: \n";
    Inorder(root);

    return 0;
}