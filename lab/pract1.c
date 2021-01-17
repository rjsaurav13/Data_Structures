#include<stdio.h>
#include<conio.h>

#define size 5

int ar[size];
int top=-1;

void push(int temp)
{   if(top==size-1){
        printf("Stack overflow");
    }
    else{
        top++;
        ar[top]=temp;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("Number deleted %d",ar[top]);
        top--;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\t",ar[i]);
    }
    printf("\n")
}
int main(){
    int temp,ch;
    printf("Please enter your choice:\n");
    for(;;){
        printf("1)-PUSH\n2)-POP\n3)-DISPLAY\n4)-Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter element to enter to add:");
                scanf("%d",&temp);
                push(temp);
                break;
            case 2:
                printf("jewnnfw");
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Enter valid number");
        }
    }
    return 0;
}
