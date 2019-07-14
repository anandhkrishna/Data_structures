#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define n 5
int q[n];
int front=-1;
int rear=-1;
void push();
void pop();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1=push\n2=pop\n3=display\n4=exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\n wrong choice");
		}
	}
	return 0;
}
void push()
{
	int item;
	if(rear==n-1)
		printf("\n queue is full");
	else 
		printf("\nEnter the element to push");
		scanf("%d",&item);
		rear=rear+1;
		q[rear]=item;
		if(front==-1)
			front = 0;
}
void pop()
{
	int data;
	if (front==-1)
	{
		printf("\n the queue is empty");
	}
	data=q[data];
	if(front==rear)
	{
		front=rear=-1;
		
	}
	else
	{
		front=front+1;
		printf("Deleted item is %d",data);
	}
}
void display()
{
	int i;
	printf("\n _____the queue is_____");
	for(i=front;i<=rear;i++)
	{
		printf("\n%d",q[i]);
	}
}	 	 

