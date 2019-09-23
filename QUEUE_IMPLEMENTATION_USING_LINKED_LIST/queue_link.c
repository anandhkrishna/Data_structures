#include<stdio.h>
#include<stdlib.h>  
#include <conio.h>
void ins();
void del();
void dis();
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear,*temp;
 
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n*** Menu ***\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
					ins();
					break;
			case 2: 
					del();
					break;
			case 3: 
					dis();
					break;
			case 4: 
					exit(0);

		}
	}
	
	return 0;
}
void ins()
{
	struct node *temp;
	int val;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&val);
	temp->data=val;
	temp->next=NULL;
	
	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
 
void del()
{
	struct node *temp;
	if(front==NULL)
		printf("Queue is empty\n");
	else
	{
		temp=front;
		front=front->next;
		printf("Deleted node is");
		printf("%d",temp->data);
		free(temp);
	}
}
 
void dis()
{
	struct node *temp;
	if(front==NULL)
		printf("Queue is empty\n");
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}		
	}
}
 


