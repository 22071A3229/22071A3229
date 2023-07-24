#include<stdio.h>
char stack[10];
int top=-1;
char pop();
void push(char x);
void main()
{
  int a[10][10],m,n;
  int i,j,state[10];
  char g[10],x;
  printf("enter the no. of nodes of graph");
  scanf("%d",&n);
  printf("enter the nodes of the graph");
  for(i=1;i<=n;i++)
  { fflush(stdin);
   g[i]=getchar();
   }
  printf("enter the adjacency matrix of the graph");
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++)
      state[i]=1;
 state[1]=2;
push(g[1]);
while(top!=-1)
{
  x=pop();
  for(i=1;i<=n;i++)
    if(x==g[i])
     break;
   state[i]=3;
printf("%c",g[i]);
for(j=1;j<=n;j++)
{
 if((a[i][j]==1) && (state[j]==1))
{
   state[j]=2;
   push(g[j]);
 }
}
}
}
void push(char x)
{
top++;
stack[top]=x;
}
char pop()
{
 return(stack[top--]);
}
