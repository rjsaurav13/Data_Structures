#include<stdio.h>
#include<stdlib.h>
#define SIZE 5


int isFull(int front, int rear)
{
 if((front==rear+1)||(front==0 && rear==SIZE-1))
 return 1;
 return 0;
}
int isEmpty(int front, int rear)
{
 if(front==-1)
 return 1;
 return 0;
}
void insert(int items[],int front,int rear)
{
 int element;
 if(isFull(front,rear))
 printf("Queue is full\n");
 else
 {
 printf("Enter the element\n");
 scanf("%d",&element);
 if(front==-1)
 front=0;
 rear=(rear+1)%SIZE;
 items[rear]=element;
 }
}
void del(int items[],int front,int rear)
{
 int element;
 if(isEmpty(rear,front))
 printf("Queue is empty\n");
 else
 {
 element=items[front];
 if(front==rear) {front=-1; rear=-1;}
 else
 front=(front+1)%SIZE;
 printf("Deleted element %d \n",element);
 }
}
void display(int items[],int rear,int front)
{
 int i;
 if(isEmpty(front,rear))
 printf("Queue is empty\n");
 else
 {
 printf("Elements in the queue\n");
 for(i=front; i<=rear; i++)
 printf("%d ",items[i]);
 printf("%d \n",items[i]);

 }
}
int main()
{
 int choice,front=0,rear=-1;;
 int items[SIZE];
 for(;;)
 {
 printf("Enter your choice\n1 Insertion\n2 Deletion\n3 Display\n4 Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:insert(items,front,rear);
 break;
 case 2:del(items,front,rear);
 break;
 case 3:display(items,front,rear);
 break;
 case 4:exit(0);
 }
 }
}
