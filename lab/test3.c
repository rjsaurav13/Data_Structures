#include<stdio.h>
#include<stdlib.h>
#define N 5
int c=0;
void enqueue(int *ele,int *r,int q[N]);
int dequeue(int *f,int q[N]);
void display(int *f,int q[N]);
void main()
{
int f=0,r=-1,q[N];
int ch,item,del;
for(;;)
{
 printf("\n1.enqueue 2.dequeue 3.display 4.exit\n");
 printf("enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("enter item to be inserted:");
 scanf("%d",&item);
 enqueue(&item,&r,q);
 break;
 case 2:del=dequeue(&f,q);
 if(del!=-1)
 printf("deleted item=%d",del);
 break;
 case 3:display(&f,q);
 break;
 case 4:exit(0);
 }
}
}
void enqueue(int *item,int *r,int q[N])
{
if(c==N)
{
 printf("overflow\n");
 return;
}
*r=(*r+1)%N;
q[*r]=*item;
c++;
}
int dequeue(int *f,int q[N])
{
int x;
if(c==0)
{
 printf("underflow\n");
 return -1;
}
x=q[*f];
*f=(*f+1)%N;
c--;
return x;
}
void display(int *f,int q[N])
{
int i,y;
if(c==0)
{
 printf("underflow\n");
 return;
}
printf("queue elements are:\n");
y=*f;
for(i=0;i<c;i++)
{
 printf("%d\t",q[y]);
 y=(y+1)%N;
}
}
