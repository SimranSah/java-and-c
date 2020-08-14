#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*head=NULL;


void create(int A[],int n){
	int i=0;
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

void removeDuplicates(struct Node *n){
	struct Node *p=n;
	struct Node *q=n->next;
	while(q!=NULL){
		if(p->data != q->data){
			p=q;
			q=q->next;
			
		}
		else
		{
			p->next=q->next;
			free(q);
			q=p->next;
		}
    }
}


void display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int A[]={1,2,3,4,4,5,5,6,7,8};
	create(A,10);
	removeDuplicates(head);
	display(head);
	return 0;
}
