#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define max 4


/*void del(){
    if(front==0){
        printf("Queue is empty::\n");
    }
    else{
        front--;
    }
}*/

void main()
{
 int choice,num;
int rear=-1,front=0;
int q[max];
 for(;;)
 {
 printf("Enter your choice\n1 Insertion\n2 Deletion\n3 Display\n4 Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
if(rear==max-1){
    printf("Queue full");
}
else{
printf("Enter the element\n");
 scanf("%d",&num);
 if(front==-1){
 rear=(rear+1)%max;
 q[rear]=num;
 front++;
 }

}
 break;
 case 2:
     printf("h");
     //del();
 break;
 case 3:

            printf("%d",q[0]);
            rear=(rear+1)%max;


 break;
 case 4:exit(0);
 }
 }
}

