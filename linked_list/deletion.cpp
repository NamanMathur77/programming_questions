#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *del(node *head){
    node *ptr;
    ptr=head;
    int info=head->data;
    head=head->next;
    cout<<"Item deleted"<<info<<"\n";
    delete(ptr);
    return head;

}

void deletebet(node *head, int info){
    node *ptr=head, *prev=head;
    while(ptr!=NULL){
        if(ptr->data==info){
            prev->next=ptr->next;
            free(ptr);
            break;
        }
        else{
            prev=ptr;
            ptr=ptr->next;
        }
    }
}


void traverse(node *head){
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

int main(){
    node *prev=NULL, *head=NULL, *p=NULL;
    cout<<"ENter the number of nodes";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        p=new node;
        cin>>p->data;
        p->next=NULL;
        if(head==NULL){
            head=p;
        }
        else{
            prev->next=p;
        }
        prev=p;
    }
    //head=del(head);
    //traverse(head);
    //cout<<"\n";
    deletebet(head, 2);
    traverse(head);
}