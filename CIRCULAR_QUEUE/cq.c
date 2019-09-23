#include <stdio.h>
#include <conio.h>
#define n 5
int q[n],front=0,rear=-1;

int main()
{	
	int ch,value;
	void enqueue();
	void dequeue();
	void display();
		printf("\n***************************");
		printf("\n1.insert\n2.deletion\n3.display\n4.exit");
	while(1)
	{
	
		printf("enter youer choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("enter invalid choice");
		}
	}
}
void enqueue()
{
	int x;
	if((front==0&&rear==n-1)||(front>0&&rear==front-1))
	{
		printf("\nqueue overflow");
	}
	else 
	{
		printf("enter the elemnt to instert:");
		scanf("%d",&x);
		if((rear==n-1)&&(front>0))
		{
			rear=0;
			q[++rear]=x;
		}
	}
}
void dequeue()
{
	int a;
	if((front==0) && (rear==-1))
	{
		printf("\ncircular queue is empty");
	}
	
	if(front=rear)
	{
			a=q[front];
			rear=-1;
			front=0;
	}
	else 
	{
		a=q[front++];
		printf("\ndeleted element %d",a);	 	 
	}
}
void display()
{
	int i,j;
	if((front==0)&&(rear=-1))
	{
		printf("circular queue is empty");	  	  
	}
	if(front>rear)
	{
		for(i=0;i<=rear;i++)
		{
			printf("\t%d",q[i]);
		}
		for(i=front;j<=n-1;j++)
		{
			printf("\t%d",q[j]);
		}
		printf("rear is at %d\n",q[rear]);
		printf("front is at %d",q[front]);
	}
	else 
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",q[i]);
		}
		printf("rear is at %d\n",q[rear]);
		printf("front i8s at %d\n",q[front]);
	}
	printf("\n");
}

