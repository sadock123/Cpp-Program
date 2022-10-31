#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node (int val){
        data=val;
        next= NULL;
    }
};

void insert(node* &head,int val){
    node* n= new node(val);
    if (head==NULL){
        head=n;
        return;
    }
    node* temp= head;
    while (temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void atfirst(node* &head,int val){
    node *n = new node(val);
    n->next=head;
    head=n;
}
bool search(node* &head, int key){
    node* temp=head;
    while (temp!= NULL){
        if (temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;

}
void deletion(node* &head, int val){
    node* temp=head;
    node* todelete=temp->next;
    if (head== NULL){
        return;
    }
    if (head->next==NULL){
        delete head;
        return;
    }
    if (temp->data==val){
        todelete=head;
        head=temp->next;
        delete todelete;
        return;
        
    }
    while (temp->next->data!=val){
        temp=temp->next;
    }
    
    temp->next = temp->next->next;
    delete todelete;
}
node* reverse(node* &head){
    node* prvpoint=NULL;
    node* currpoint=head;
    node* nextpoint;
    while (currpoint!=NULL){
        nextpoint=currpoint->next;
        currpoint->next=prvpoint;
        prvpoint=currpoint;
        currpoint=nextpoint;
    }
    return prvpoint;
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
    node* head=NULL;
    insert(head,3);
    insert(head,2);
    insert(head,1);
    atfirst(head,4);
    print(head);
    node* newhead = reverse(head);
    print(newhead);

    return 0;
}