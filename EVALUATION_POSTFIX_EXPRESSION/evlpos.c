#include <ctype.c>
#include <conio.h>
#include <stdio.h>
#define n 50
int s[n];
int top =-1;
push(int elem)
{
	s[++top]=elem;
}
int pop()
{
	return (s[top--]);
}
int main()
{
	char post[50],ch;
	int i=0,op1,op2;
	printf("\n postfix expresson:");
	scanf("%s",post);
	while(ch=post[i++] != '\0')
	{
		if(isdigit(ch))
			push(ch-'0');
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+':
					push(op1+op2);
				case '-':
					push(op1-op2);
				case '*':
					push(op1*op2);
				case '/':
					push(op1-op2);
			}
		}
	}
	printf("%s",post);
	printf("%d",s[top]);
}

