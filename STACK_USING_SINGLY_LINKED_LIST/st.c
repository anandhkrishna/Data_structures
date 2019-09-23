#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
	struct node *next;
};
struct node *head,*n;
struct node *top =NULL;
  
void display()
{
  struct node*ptr;
  ptr=top;
  printf("\nvalues in the stack..\n");
  while(ptr->next!=NULL)
  {
    printf("%d",ptr->data);
	printf("\n");
	ptr=ptr->next;
   }
   printf("%d",ptr->data);
   printf("\nsuccessfully displayed!!\n");
}
void push()
{
   if(top==NULL)
   {
      int num,i;
	  head=(struct node*)malloc(sizeof(struct node));
	  printf("enter the number to be push:\n");
	  scanf("%d",&head->data);
	  head->next=NULL;
	  top=head;
	  printf("enter the number of elements to pushed:");
	  scanf("%d",&num);
	  for(i=0;i<num;i++)
	  {
	     n=(struct node*)malloc(sizeof(struct node));
		 printf("enter the number to be push:\n");
		 scanf("%d",&n->data);
		 n->next=top;
		 top=n;
	   }
    }
    else
	{
	   n=(struct node*)malloc(sizeof(struct node));
	   printf("enter the number to be push:\n");
	   scanf("%d",&n->data);
	   n->next = top;
	   top=n;
	 }
	 printf("successfully pushed\n");
}
void pop()
{
   struct node*ptr;
   ptr=top;
   top=ptr->next;
   free(ptr);
   printf("\nsuccessfully poped\n");
  }
 int main()
  {
    int ch;
	while(1)
	{
	 printf("operations in stack..\n1.push\n2.pop\n3.display\n4.exit\n\nenter your option:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	  case 1:push();break;
	  case 2:pop();break;
	  case 3:display();break;
	 case 4:exit(0);break;
	 default:printf("invalid number");
	         break;
	}
  }
 return 0;
 }
  
	 



	 
		 
	   

