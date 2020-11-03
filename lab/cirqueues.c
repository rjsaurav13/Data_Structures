#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define max 4
int rear=-1,front=0;
int q[max];
void insert(){
    int num;
if(rear==max-1){
    printf("Queue full");
}
else{
        scanf("%d",num);
        rear=(rear+1)%max;
        q[rear]=num;
        front++;
}
}
void display(){
    if(front==0){
       printf("Queue is empty:");
       exit(0);
    }
    else{
        for(int i=front;i<rear;i++){
            printf("%d",q[i]);
        }
    }
}
int main(){
int ch;
printf("Enter your choice: \n");
printf("1)-INSERT 2)-DELETE 3)-DISPLAY 4)-EXIT");
scanf("%d",&ch);
switch(ch) {
case 1:
    insert();
    break;
case 2:
    printf(":");
   // del();
    break;
case 3:
    display();
    break;
case 4:
    return;
    printf("PLEASE CHOOSE CORRECT OPTION:-:");
}
return 0;
}
