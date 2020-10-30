#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
void insert();
int delete_element();

void display();
int main()
{
int ch, val;
do {
printf("\n1. Insertion: ");
printf("\n2. Deletion: ");
printf("\n4. Display: ");
printf("\n5. EXIT");
printf("\n\n\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
val = delete_element();
if(val != -1);
printf("\n The number deleted is : %d", val);
break;
case 3:
display();
break;
}
}while(ch != 4);
return 0;
}
void insert() {
int num;
printf("\n Enter the element to be inserted into the queue : ");
scanf("%d", &num);
if(rear == MAX-1)
printf("\n OVERFLOW");
else if(front == -1 && rear == -1)
front = rear = 0;
else
rear++;
queue[rear] = num;
}
int delete_element()
{
int val;
if(front == -1 || front > rear)
{
printf("\n UNDERFLOW");
return -1;
}
else {
val = queue[front];
front++;
if(front > rear)
front = rear = -1;
return val;
}
}

void display()
{
int i;
printf("\n");
if(front == -1 || front > rear )
printf("\n QUEUE IS EMPTY");
else {
for(i = front;i <= rear ; i++)
printf("\t %d", queue[i]);
}
}
