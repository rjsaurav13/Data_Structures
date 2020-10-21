#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f=0,r=-1,q[SIZE];
void insrt(int ele);
int delet();
void display();
int num_of_ele();
void main()
{
 int ch,item,del;
 for(;;)
 {
 printf("\n1.Insert|2.Delete|3.Display|4.Elements in queue|5.exit\n");
 printf("Enter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("Enter the item \n");
 scanf("%d",&item);
 insrt(item);
 break;
 case 2:del=delet();
 if(del!=-1)
 printf("Deleted elements are %d\n",del);
 break;
 case 3:display();
 break;
 case 4:printf("The number of elements in the queue: 
%d\n",num_of_ele());
 break;
 case 5:exit(0);
 }
 }
}
int num_of_ele()
{
 return (r-f+1);
}
void insrt(int ele)
{
 if(f==SIZE-1)
 {
 printf("The queue is full\n");
 return;
 }
 q[++r]=ele;
}
int delet()
{
 if(f>r)
 {
 printf("The queue is empty\n");
 return -1;
 }
 return q[f++];
}
void display()
{
 int i;
 if(f>r)
 {
 printf("The queue is empty\n");
 return;
 }
 printf("Elements present:\n");
 for(i=f;i<=r;i++)
 printf("%d\n",q[i]);
}