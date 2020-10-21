#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
 int a[SIZE];
 int top;
};
struct stack s={.top=-1};
void push(int);
int pop();
void display();
void main()
{
int ch,item,del;
for(;;)
{
 printf("\n1.push \n2.pop \n3.display \n4.exit\n");
 printf("Enter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("Enter the item\n");
 scanf("%d",&item);
 push(item);
 break;
 case 2:del=pop();
 if(del!=-1)
 printf("The deleted element is %d\n",del);
 break;
 case 3:display();
 break;
 case 4:exit(0);
 }
 }
}
void push(int item)
{
 if(s.top==SIZE-1)
 {
 printf("stack is overflow\n");
 return;
 }
s.a[++s.top]=item;
}
int pop()
{
 if(s.top==-1)
 {
 printf("stack is underflow\n");
 return -1;
 }
return s.a[s.top--];
}
void display()
{
int i;
if(s.top==-1)
 {
 printf("stack is empty\n");
 return;
 }
 printf("The elements in stack are as follows: \n");
 for(i=0;i<=s.top;i++)
 printf("%d ",s.a[i]);
}