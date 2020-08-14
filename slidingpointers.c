#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*head=NULL;

void create(int A[],int n){
	int i;
	struct Node *t,*last;
	head=(struct Node*)malloc(sizeof(struct Node));
	head->data=A[0];
	head->next=NULL;
	last=head;
	for(i=1;i<n;i++){
	     t=(struct Node*)malloc(sizeof(struct Node));
	     t->data=A[i];
	     t->next=NULL;
	     last->next=t;
	     last=t;
	}
}


void reverse(struct Node *p){
	struct Node *q,*r=NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}	
	head=q;
}


void display(struct Node *p){
	while(p!=NULL){
		printf(" %d ",p->data);
		p=p->next;
	}
}

int main(){
	int A[]={1,2,3,4,5};
	create(A,5);
	reverse(head);
	display(head);
	return 0;
}
 
