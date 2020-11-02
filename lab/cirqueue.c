#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int fr =-1;
int re =-1;



int isFull()
{
 if((fr==re+1)||(fr==0 && re==SIZE-1))
 return 1;
 return 0;
}
int isEmpty()
{
 if(fr==-1)
 return 1;
 return 0;
}
void insert(int items[])
{

 int element;
 if(isFull(fr,re))
 printf("Queue is full\n");
 else
 {
 printf("Enter the element\n");
 scanf("%d",&element);
 if(fr==-1)
 fr=0;
 re=(re+1)%SIZE;
 items[re]=element;
 }
}
void del(int items[])
{

 int element;
 if(isEmpty(re,fr))
 printf("Queue is empty\n");
 else
 {
 element=items[fr];
 if(fr==re) {fr=-1; re=-1;}
 else
 fr=(fr+1)%SIZE;
 printf("Deleted element %d \n",element);
 }
}
void display(int items[])
{

 int i;

 printf("Elements in the queue\n");
 for(i=fr; i<=re-1; i++)
 printf("%d ",items[i]);
 printf("%d \n",items[i]);


}
int main()
{
 int choice;
 int items[SIZE];
 for(;;)
 {
 printf("Enter your choice\n1 Insertion\n2 Deletion\n3 Display\n4 Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:insert(items);
 break;
 case 2:del(items);
 break;
 case 3:display(items);
 break;
 case 4:exit(0);
 }
 }
}
