
#include <ctype.h>
#define n 50
int s[n];
int top =-1;
void push(char elem)
{
	s[++top]=elem;
}
char pop()
{
	return (s[top--]);
}
int pr(char elem)
{
	switch(elem)
	{
		case '#':
			return 0;
		case '(':
			return 1;
		case '+':
		case '-':
		    return 2;
		case '*':
			return 3;
		case '/':
			return 3;
	}
}
main()
{
	char infx[50],posx[50],ch,elem;
	int i=0,k=0;
	printf("\nenter the postfix expresson:");
	scanf("%s",infx);
	push('#');
	while((ch=infx[i++]) !='\0')
	{
		if(ch=='(')
		{
			push(ch);
		}
		else 
			 if(isalnum(ch))
			 
					posx[k++]=ch;
			
		     else 
			 	if(ch==')')
		
			 		while(s[top] !='(')
					{
						posx[k++]=pop();
						elem=pop();
					}
		
				else 
				{
					while(pr(s[top]) >=pr(ch))
					{
						posx[k++]=pop();
						
					}
					push(ch);
				}
	}
	while(s[top] != '#')
	{
		posx[k++]=pop();
		
	}
	posx[k]='\0';
	printf("\n given exp:%s postfix exp: %s",infx,posx);
}

