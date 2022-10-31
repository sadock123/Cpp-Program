//preorder traversal

#include "bits/stdc++.h"
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }

};
void preorder(struct Node* root){
    if (root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
int CountNode(struct Node* root){
    if (root==NULL){
            return 0;
    }
    return (CountNode(root->left)+CountNode(root->right) +1);
}
int calcHeight(Node* root){
    if (root==NULL){
        return 0;
    }
    int lHeight= calcHeight(root->left);
    int rHeight= calcHeight(root->right);
    return max(lHeight,rHeight);
}
int calcDiameter(Node* root){
    if (root==NULL){
        return 0;
    }
    int lHeight= calcHeight(root->left);
    int rHeight= calcHeight(root->right);
    int currHeight= lHeight+ rHeight+1;
    int lDiameter= calcDiameter(root->left);
    int rDiameter= calcDiameter(root->right);
    return max(currHeight,max(lDiameter,rDiameter));
}
int main(){
    struct Node* root =new Node(1);
    root->right= new Node(3);
    root->left=new Node(2);
    preorder(root);
    cout << CountNode(root)<<"\n";
}