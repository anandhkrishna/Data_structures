#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void push();
void pop();
void display();
#define n 5
int top=-1,stack[n];
int main()
{
	int ch;
	while(1)
	{
		printf("\n1::push\n2::pop\n3::display\n4::exit");
		scanf("\n%d",&ch);
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
	if(top==n-1)
	{
		printf("\nstack is full");
	}
	else 
	{
		printf("\nEnter the element to push:");
		scanf("\n%d",&item);
		top=top+1;
		stack[top]=item;
		
	}
}
void pop()
{

	if(top<0)
	{
		printf("\nStack is empty");
	}
	else 
	{
	
		printf("\n Delted element is %d",stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top<0)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("\nThe stack is ...\n");
		for(i=top;i>-1;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	
}
	
			

