#include<conio.h>
#include<stdio.h>
#include "Queue.h"
struct Node *root=NULL;

void IPreorder(struct Node *p){
	stackCreate(&s,100);
	while(p || !isEmptyStack(s)){
		if(p){
			printf("%d",p->data);
			push(&s,p);
			p=p->lchid
		}

        else {
            p=pop(&s);
            p=p->rchild;
        }
    }
}

void IPostorder(struct Node *p){
	stackCreate(&s,100);
	while(p || !isEmptyStack(s)){
		if(p){
			push(&s,p);
			p=p->lchild;
		}
		else{
			pop(&s);
			p=p->rchild;
			printf("%d",p->data);
		}
	}
}	

void IInorder(struct Node *p){
	stackCreate(&s,100);
	while(p || isEmptyStack(s)){
		if(p){
			push(&s,p);
		    p=p->lchild;
		}
		else{
			pop(&s);
			printf("%d",p->data);
			p=p->rchild;
		}
	}
}
	
		
