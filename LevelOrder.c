#include<conio.h>
#include<stdio.h>
struct Node *root;

void treeCreate(){
	struct Node *p,*t;
	int x;
	struct Queue *q;
	create(&q,100);
	
	printf("Enter the root value");
	scanf("%d",&x);
	root=(struct Node *)malloc(sizeof(struct Node));
	root->data=x;
	root->lchild->rchild=NULL;
	enqueue(&q,root);
	
	while(!isEmpty(q)){
		p=dequeue(&q);
		printf("Enter the leftchild of the node !");
		scanf("%d",&x); 
		
		if(x!=1){	
		p=(struct Node*)malloc(sizeof(struct Node));
		P->data=x;
		p->lchild=p->rchild=NULL;
		p->lchild=t;
		enqueue(&q,p);
	    }
		  
		printf("Enter the rightchild of the node ");
		scanf("%d",&x);
		if(x!=-1){
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
			
		}
    }
}
	
	
	
	
} 
void levelOrder(struct Node *root){
	struct Queue q;
	printf("%d",root->data)
	enqueue(&q,root);
	while(!isEmpty(q)){
		if(root->lchild){
			printf("%d",root->lchild->data);
            enqueue(&q,root->lchild);			
		}
		if(root->rchild){
			printf("%d",root->rchild->data);
			enqueue(&q,root->rchild)
			
		}
    }
    
   }	
}

int main(){
	treeCreate();
	levelOrder(root);
	return 0;
}
