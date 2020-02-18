#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* head=NULL;
void insert(int new_data){
Node* new_node=new Node(); //struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
new_node -> data=new_data; //new_node.data=new_data
new_node -> next=head;     //new_node.next=head
head=new_node;
}
void display(){


Node* ptr;
ptr=head;
while(ptr!=NULL){
cout<<ptr->data<<" ";
ptr=ptr->next;
}
}
int main(){
insert(3);
insert(2);
insert(1);
display();
return 0;
}
