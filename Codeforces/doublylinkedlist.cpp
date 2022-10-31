#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    
    node (int val){
        data= val;
        next=NULL;
        prev= NULL;
    }
};
void insertionAtHead( node* &head, int val){
    node* n = new node(val);
    n->next= head;
    if (head != NULL){
    head->prev=n;
    }
    head=n;

}
void insertion(node* &head,int val){
    node* n = new node(val);
    if (head== NULL){
        insertionAtHead(head,val);
        return;
    }
    node* temp = head;
    
    while (temp->next!= NULL){
        temp=temp->next;

    }
    temp->next = n;
    n->prev = temp;
}
void deletion(node* &head, int val){
    node* temp = head;
    int count = 1;
    while (temp!= NULL & count!= pos){
        temp=temp->next;
        count++;
    }
    if (pos==1){
    temp->prev->next= temp->next;
}
    if (temp->next != NULL){
    temp->next->prev= temp->prev;
    }
    delete temp;
}
void print(node* &head){
    node* temp=head;
    while (temp!= NULL){
        cout << temp->data <<"->";
        temp=temp->next;
    }
    cout <<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    insertion(head,5);
    insertion(head,4);
    insertion(head,3);
    insertion(head,2);
    insertion(head,1);
    insertion(head,0);
    print(head);
}