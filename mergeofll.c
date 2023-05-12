#include<stdio.h>
#include<alloc.h>
#include<conio.h>

struct node
{
int x;
struct node *link;
}*first=NULL,*temp,*nn,*second=NULL,*last;
struct node *createsll(struct node *f)
{
char ch;
do
{
nn=(struct node *)malloc(sizeof(struct node));
printf("enter inter data");
scanf("%d",&nn->x);
if(f==NULL)
{
f=nn;
temp=nn;
}
else
{
temp->link=nn;
temp=nn;
}
printf("continue on create y/n");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y');
temp->link=NULL;
last=nn;
return(f);
}
void display(struct node *f)
{
if(f==NULL)
printf("sll is empty");
else
{
printf("content of sll is");
temp=f;
while(temp!=NULL)
{
printf("%3d",temp->x);
temp=temp->link;
}
}}
struct node *merge(struct node *t1,struct node *t2)
{
struct node *t3,*t4;
while(t1!=NULL &&t2!=NULL)
{
t3=t1->link;
t4=t2->link;
t1->link=t2;
t2->link=t3;
if(t3==NULL)
break;
t1=t3;
t2=t4;
}
if(t3==NULL)
t2->link=t4;

return(t1);
}
void main()
{
  int choice,p;
  char ch;
  clrscr();
  do
  {
  printf("1:create 2:2create 3:display 4:merge");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:first=createsll(first);
	 break;
  case 2:second=createsll(second);
	 break;
  case 3:display(first);
	 break;
  case 4:merge(first,second);
	 break;
  default :printf("invalid");
  }
  printf("contnue on main y or n");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch=='y');
  getch();
  }
