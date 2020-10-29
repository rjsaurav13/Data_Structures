#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX];
int front=0, rear=-1,i,j;
void insert()
{
	printf("Enter value\n");
 int ele;
 scanf("%d",&ele);
 if(rear==MAX-1)
 printf("Queue overflow\n");
 else
{
 j=rear;
 while((j>=front)&&(ele>q[j]))
 {
 q[j+1]=q[j];
 j--;
 }
 q[j+1]=ele;
 rear++;
 }
}
void delete()
{
 int flag=0;
 if(front>rear)
 printf("There are no elements to delete\n");
 else
 {
 int ele;
 printf("Enter value to delete\n");
 scanf("%d",&ele);
 for(i=front;i<=rear;i++)
 {
 if(q[i]==ele)
 {
 flag=1;
 for(j=i;j>front;j--)
 q[j]=q[j-1];
 front++;
 break;
 }
 }
 if(flag==0)
 printf("%d not found\n",ele);
 }
}
void display()
{
 if(front>rear)
 printf("Queue is empty\n");
 else
 {
 for(i=front;i<=rear;i++)
 printf("%d ",q[i]);
 printf("\n");
 }
}
int main()
{
 int ch;
 printf("1 Insert\n2 Delete\n3 Display\n4 Exit\n");
 for(;;)
 {
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:insert();
 break;
 case 2:delete();
 break;
 case 3:display();
 break;
 case 4:exit(0);
 }
 }
 return 0;
}