#include<stdio.h>
#include<stdlib.h>
#define N 10
int r=-1,q[N];
void enqueue(int ele);
int delmin();
int delmax();
void display();
void main()
{
int ch,item,del;
for(;;)
{
 printf("\n1)-Insertion 2)-Delete min 3)-Delete max 4)-Display 5)-Exit");
 printf("\nenter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("enter item to be inserted: ");
 scanf("%d",&item);
 enqueue(item);
 break;
 case 2:del=delmin();
 if(del!=-1)
 printf("deleted item=%d",del);
 break;
 case 3:del=delmax();
 if(del!=-1)
 printf("deleted item=%d",del);
 break;
 case 4:display();
 break;
 case 5:exit(0);
 }
}
}
void enqueue(int item)
{
if(r==N-1)
{
 printf("overflow\n");
 return;
}
q[++r]=item;
}
int delmin()
{
int min,i,pmin=0;
if(r==-1)
{
 printf("underflow\n");
 return -1;
}
min=q[0];
for(i=0;i<=r;i++)
 if(q[i]<min)
 {
 min=q[i];
 pmin=i;
 }
for(i=pmin;i<=r;i++)
 q[i]=q[i+1];
r--;
return min;
}
int delmax()
{
int max,i,pmax=0;
if(r==-1)
{
 printf("underflow\n");
 return -1;
}
max=q[0];
for(i=0;i<=r;i++)
 if(q[i]>max)
 {
 max=q[i];
 pmax=i;
 }
for(i=pmax;i<=r;i++)
 q[i]=q[i+1];
r--;
return max;
}
void display()
{
int i;
if(r==-1)
{
 printf("underflow\n");
 return;
}
printf("queue elements: ");
for(i=0;i<=r;i++)
 printf("%d\t",q[i]);
}
