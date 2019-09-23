#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
	int data;
	struct node*left,*right;
};
struct node *tree;
void create()
{
	tree=NULL;
}
void insert()
{
	int n;
	struct node *ptr,*nodeptr,*parentptr;
	printf("enter the number:");
	scanf("%d",&n);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=n;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
	}
	else 
	{	
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr !=NULL)
		{
			parentptr=nodeptr;
			if(n>nodeptr->data)
			{
				nodeptr=nodeptr->right;
			}
			else 
			
			{
				nodeptr=nodeptr->left;
				
			}
		}
		if(n<parentptr->data)
		{
		
			parentptr->left=ptr;
		}
		else 
		{
			parentptr->right=ptr;
		}
	}
}
void preorder(struct node*tree)
{
	if(tree != NULL)
	{
		printf("%d",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}
void inorder(struct node*tree)
{
	if(tree != NULL)
	{
		inorder(tree->left);
		printf("%d->",tree->data);
		inorder(tree->right);
	}
}
void postorder(struct node *tree)
{
	if(tree !=NULL)
	{
		postorder(tree->left);
		postorder(tree->right);
		printf("%d->",tree->data);
	}
}
void case_a(struct node*root,struct node *par,struct node *ptr)
{
	if(par==NULL)
	{
		root=NULL;
	}
	else if(ptr==par->left)
	{
		par->left=NULL;
	}
	else if(ptr=par->right)
	{
		par->right=NULL;
	}
	free(ptr);
}
void case_b(struct node*root,struct node *par,struct node *ptr)
{
	struct node*child;
	if(ptr->left=NULL)
	{
		child=ptr->left;
	}
	else
	{
		child=ptr->right;
	}
	if(par==NULL)
	{
		root=child;
	}
	else if(ptr==par->left)
	{
		par->left=child;
	}
	else if(ptr==par->right)
	{
		par->right=child;
	}
	free(ptr);
}
void case_c(struct node*root,struct node *par,struct node *ptr)
{
	struct node*succ,*parsucc;
	parsucc=ptr;
	succ=ptr->right;
	while(succ->left=NULL)
	{
		parsucc=succ;
		succ=succ->left;
	}
	ptr->data=succ->data;
	if(succ->left==NULL && succ->right==NULL)
	{
		case_a(tree,parsucc,succ);
	}
	else 
	{
		case_b(tree,parsucc,succ);
	}
}
void delete()
{
	int d;
	struct node *ptr,*par;
	printf("enter the number:");
	scanf("%d",&d);
	ptr=tree;
	par=NULL;
	while(par !=NULL)
	{
		if(ptr->data)
		{
			break;
		}
		par=ptr;
		if(d<ptr->data)
		{
			ptr=ptr->left;
		}
		else
		{
			ptr=ptr->right;
		}
	}
	if(ptr=NULL)
	{
		printf("number nopt found");
		return;
	}
	else if(ptr->left != NULL && ptr->right !=NULL)
	{
		case_c(tree,par,ptr);
	}
	else if(ptr->left !=NULL || ptr->right !=NULL)
	{
		case_b(tree,par,ptr);
	}
	else
	{
		case_a(tree,par,ptr);
	}
}
int main()
{
	int ch;
	do
	{
		printf("\nMENU");
		printf("\n1.insert\n2.delete\n3.preorder\n4.inorder\n5.postorder\n6.exit\nentert your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				preorder(tree);
				break;
			case 4:
				inorder(tree);
				break;
			case 5:
				postorder(tree);
				break;
			case 6:
				printf("yokoso");
				exit(1);
		}
	}while(ch !=7);
}
	
			
	
			
			
	

