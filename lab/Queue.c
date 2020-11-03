#include <stdio.h>
#include<stdlib.h>
int main()
{
int rear=-1, front = - 1,MAX=5,queue_array[MAX],choice,item,i;
while (1)
{
printf("\n1.insert 2.delete 3.display 4.exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:
//int item;
if(rear == MAX - 1)
printf("Queue Overflow \n");
else
{
if(front== - 1)
front = 0;
printf("Insert the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
break;
case 2:
if(front == - 1 || front > rear)
{
printf("Queue Underflow \n");
return;
}
else
{
printf("Element deleted from queue is : %d", queue_array[front]);
front = front + 1;
}
break;
case 3:
//int i;
if(front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is : ");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("\n");
}
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
return 0;
}
