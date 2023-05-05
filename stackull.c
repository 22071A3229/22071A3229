#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*link;
}*top=NULL,*nn,*temp;
void push(int x)
{
nn=(struct node *)malloc(sizeof(struct node));
printf("enter value:");
scanf("%d",&x);
nn->data=x;
if(top==NULL)
{
top=nn;
top->link=NULL;
}
else
{
nn->link=top;
top=nn;
}
}
int pop(void)
{
int ele;
if(top==NULL)
{
return(-1);
}
else
{
ele=top->data;
temp=top;
top=top->link;
temp->link=NULL;
free(temp);
return(ele);
}
}
void display(void)
{
int i;
if(top==NULL)
printf("stack empty");
else
{
temp=top;
while(temp!=NULL)
{
printf(" %d",temp->data);
temp=temp->link;
}
}
}
int isempty()
{
if(top==NULL)
return(0);
else
return(1);
}
int main()
{
int choice,ele,x;
char ch;
clrscr();
do{
printf("1:push 2:pop 3:display 4:isempty\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push(x);
       break;
case 2:ele=pop();
       printf("element popped is %d",ele);
       break;
case 3:display();
       break;
case 4:ele=isempty();
       if(ele==0)
       printf("stack empty");
       else
       printf("stack is not empty");
       break;
default:printf("wrong choice");
}
printf("continue y/n");
fflush(stdin);
ch=getchar();
}while(ch=='y');
return(0);
}

