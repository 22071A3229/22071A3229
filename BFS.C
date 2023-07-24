#include<stdio.h>
char queue[10];
int front=0,rear=-1;
char delete();
void insert(char x);
void main()
{
  int a[10][10],m,n;
  int i,j,state[10];
  char g[10],x;
  printf("enter the no. of nodes of graph");
  scanf("%d",&n);
  printf("enter the nodes of the graph");
  for(i=1;i<=n;i++)
  {
   fflush(stdin);
   g[i]=getchar();
   }

  printf("enter the adjacency matrix of the graph");
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++)
      state[i]=1;
 state[1]=2;
insert(g[1]);
while(front<=rear)
{
  x=delete();
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
   insert(g[j]);
 }
}
}
getch();
}
void insert(char x)
{
queue[++rear]=x;
}
char delete()
{
 return(queue[front++]);
}
