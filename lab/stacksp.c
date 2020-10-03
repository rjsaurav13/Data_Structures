#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1;
void push(int a[],int item)
{
 top=top+1;
 a[top]=item;
}
int pop(int a[])
{
 int item;
 item=a[top];
 top=top-1;
 return item;
}
void display(int a[])
{
 int i;
 if(top==-1)
 printf("The stack is empty\n");
 else if(top!=-1)
 {
 printf("The stack elements are\n");
 for(i=top; i>=0;i--)
 printf("%d ",a[i]);
 printf("\n");
 }
}
int main()
{
 int s[10],choice,item;

 while(1)
 {
 printf("Enter the choice\n");
 printf("1 Push\n2 Pop\n3 Display\n4 Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: if(top==SIZE-1)
 {
 printf("The stack is full\n");
 break;
 }
 else
 {
 printf("Enter the element to be pushed\n");
 scanf("%d",&item);
 push(s,item);
 }
 break;
 case 2: if(top==-1)
 {
 printf("The stack is empty\n");
 break;
 }
 item=pop(s);
 printf("Popped element is %d\n",item);
 break;
 case 3: display(s);
 break;
 case 4: exit(0);
 }
 }
 return 0;
}
