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
Node* buildTree(int preorder[],int inorder[],int start, int end){
    static int index =0;
    int curr =preorder[index];
    index++;
    Node* node = New Node(curr);

    int pos = search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
}
int main(){
    int preorder[]={1,2,4,3,5}
    int inorder[]={4,2,1,5,3}
    return 0;
}