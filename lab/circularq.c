#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define max 5
void insert(int temp,int *fr,int *re,int qu[]);

void del();
void display();

int main(){
    int num,q[max],front=-1,rear=-1;
    for(;;){
        printf("Enter your choice:-");
        printf("\n1-Insert 2-Delete 3-Display 4-display\n");
        scanf("%d",&num);
        switch(num){
        case 1:
            printf("Enter the element to insert:-\n");
            scanf("%d",&num);
            insert(num,&front,&rear,q);
        break;
        case 2:
            del(&front,&rear,q);
        break;
        case 3:
            display(&front,&rear,q);
        break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice");
        }
    }
return 0;
}
void insert(int temp,int *fr,int *re,int qu[]){
    if(*re==max-1){
        printf("Queue is overflow:\n");
    }
    else{
        if(*fr==-1)
        *fr=0;
        *re=(*re+1)%max;
        qu[*re]=temp;
    }
}
void del(int *fr,int *re,int qu[]){
    int element;
    element=qu[*fr];
    if(*fr==*re)
    {
        *fr=-1;
        *re=-1;
    }
    else{
        *fr=(*fr+1)%max;
        printf("Deleted element %d \n",element);
    }
}
void display(int *fr,int *re,int qu[]){
    int i;
    printf("Elements in the queue\n");
    for(i=*fr; i<=*re-1; i++)
    printf("%d ",qu[i]);
    printf("%d \n",qu[i]);

}
