#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
private:
Node* merge(Node* h1, Node* h2){
    Node* x = new Node(-1);
    Node* temp = x;
    while(h1 && h2){
        if(h1->data<=h2->data){
            temp->next = h1;
            h1 = h1->next;
        }
        else{
            temp->next = h2;
            h2 = h2->next;
        }
        temp = temp->next;
    }
    //for the cases which are left out
    while(h1){
        temp->next= h1;
        h1=h1->next;
        temp=temp->next;
    }
    while(h2){
        temp->next = h2;
        h2 = h2->next;
        temp = temp->next;
    }
    return x->next; //return pointer to the head of newly created linked list
}

Node* mid_Node(Node* head){
    Node* slow = head, *fast=head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        Node* a;
        Node* b;
        if(head==NULL || (head->next)==NULL){
            return head;
        }
        Node* mid = mid_Node(head);
        Node* head2 = mid->next;
        mid->next = NULL;
        Node* sortHead1 = mergeSort(head);
        Node* sortHead2 = mergeSort(head2);
        
        Node* newHead = merge(sortHead1, sortHead2);
        return newHead;
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends