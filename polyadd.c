#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
int c,p;
struct node *link;
}*first=NULL,*temp,*nn,*second=NULL,*third=NULL,*last;
struct node *createsll(struct node *f)
{
char ch;
do
{
nn=(struct node *)malloc(sizeof(struct node));
printf("enter inter data");
scanf("%d%d",&nn->c,&nn->p);
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

void dispaly(struct node *f)
{
    if(f==NULL)
    printf("empty");
    else
    {
        printf("poly add result");
        temp=f;
        while(temp->link!=NULL)
        {
            printf("%dx^%d+",temp->c,temp->p);
            temp=temp->link;
        }
    
    printf("%dx^%d",temp->c,temp->p);
    }
}
struct node* polyadd(struct node *t1,struct node *t2,struct node *t3)
{

while(t1!=NULL &&t2!=NULL)
{
 nn=(struct node*)malloc(sizrof(struct node))
 if(t1->p < t2->p)
 {
     nn->p=t2->p;
     nn->c=t2->c;
     t2=t2->link;
 }
 else if(t1->p >t2->p)
 {
     nn->p=t1->p;
     nn->c=t1->c;
     t1=t1->link;
 }
 else
 {
     nn->p=t2->p;
     nn->c=t1->c+t2->c;
     t1=t1->link;
     t2=t2->link;
 }
 if(t3==NULL)
 {
     t3=nn;
     temp=nn;
 }
 else
 {
     temp->link=nn;
     temp=nn;
 }
}
if(t1==NULL)
{
    while(t2!=NULL)
    {
        nn=(struct node*)maqlloc(sizeof(struct node))
        nn->p=t2->p;
        nn->c=t2->c;
        t2=t2->link;
        temp->link=nn;
        temp=nn;
    }
}
if(t2==NULL)
{
    while(t1!=NULL)
    {
        nn=(struct node*)malloc(sizeof(struct node))
        nn->p=t2->p;
        nn->c=t2->c;
        t1=t1->link;
        temp->link=nn;
        temp=nn;
    }
}
temp->link=NULL;
return(t3);
}

void main()
{
  int choice,p;
  char ch;
  
  do
  {
  printf("1:create 2:2create 3:displayf 4:polyadd 5:displays 6:displaypoly");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:first=createsll(first);
	 break;
  case 2:second=createsll(second);
	 break;
  case 3:display(first);
	 break;
  case 4:polyadd(first,second,third);
	 break;
  case 5:display(second);
     break;
  case 6:dispaly(third);
     break;
  default :printf("invalid");
  }
  printf("contnue on main y or n");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch=='y');
  
  }
