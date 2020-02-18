#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
void traverse(node *head){
	node *temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

node *start(node *head, int info){
	if(head==NULL){
		node *start;
		start = new node();
		start->data=info;
		start->next=NULL;
	}
	else{
		node *start;
		start = new node();
		start->data=info;
		start->next=head;
		return start;
	}
}

node *end(node *head, int info){
	if(head==NULL){
		node *start;
		start=new node();
		start->data=info;
		start->next=NULL;
	}
	else{
		node *ptr,*n;
		n=new node();
		n->data=info;
		n->next=NULL;
		ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=n;
	}
}

void sf(node *head, int n, int info){
	if(head==NULL){
		cout<<"NOt Possible";
	}
	else
	{
		node *ptr;
		ptr=head;
		while(ptr!=NULL){
			if(ptr->data==n){
				node *n;
				n=new node();
				n->next=ptr->next;
				ptr->next=n;
				n->data=info;
				break;
			}
			else{
				ptr=ptr->next;
			}
		}
	}
	
}
int main(){
	node *prev=NULL, *head=NULL, *p=NULL;
	cout<<"Enter the number of nodes\n";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		p=new node();
		cout<<"Enter the data\n";
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
head=start(head,5);

traverse(head);
end(head, 6);
cout<<"\n";
traverse(head);
sf(head, 2, 4);
cout<<"\n";
traverse(head);
//reversing the linked list
node *post=NULL, *curr=head, *nex=NULL;
while(curr!=NULL){
	nex=curr->next;
	curr->next=post;
	post=curr;
	curr=nex;
}
head=post;
cout<<"\n";
traverse(head);
}
