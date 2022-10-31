#include <iostream>
using namespace std;

class node{
    public:
    int data;
    
    node* next;
    
    node (int val){
        data= val;
        next=NULL;
    }
};
void insertAtHead(node* head, int val){
    node* n =new node(val);
    
    if (head==NULL){
      n->next=n;
      head=n;
      return;  
    }
    node* temp = head;
    while (temp->next!= head){
        temp=temp->next;
    }
    temp->next=n;
    n->next = head;
    head=n;

}
void insertionAtTail(node* head, int val){
    node* n= new node(val);
    node* temp = head;
    if (head==NULL){
        insertAtHead(head);
        return;
    }
    while (temp->next!= head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}
void print(node* &head){
    node* temp=head;
    do {
        cout << temp->data << "->";
        temp=temp->next;
    }
    while (temp!= head);
    cout << "endl";
}

int main(){

}