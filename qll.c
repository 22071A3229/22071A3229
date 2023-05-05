#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*link;
}*f=NULL,*r=NULL,*nn,*temp;
void insert(int x)
{
nn=(struct node *)malloc(sizeof(struct node));
printf("enter value:");
scanf("%d",&x);
nn->data=x;
if(f==NULL&&r==NULL)
{
f=nn;
r=nn;
nn->link=NULL;
}
else{
r->link=nn;
r=nn;
r->link=NULL;
}
}
int delete(void)
{
int ele;
if(f==NULL&&r==NULL)
{
return(-1);
}
else
{
temp=f;
ele=f->data;
f=f->link;
temp->link=NULL;
free(temp);
return(ele);
}
}
void display(void)
{
int i;
if(f==NULL&&r==NULL)
printf("stack empty");
else
{
temp=f;
while(temp!=NULL)
{
printf(" %d",temp->data);
temp=temp->link;
}
}
}
int isempty()
{
if(f==NULL&&r==NULL)
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
printf("1:insert 2:delete 3:display 4:isempty\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insert(x);
       break;
case 2:ele=delete();
       printf("element deleted is %d",ele);
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

