#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();

int main ()
{
int a=-1,b=-1;
int * front = &a, * rear = &b;
int queue[maxsize];
    int choice;
    while(choice != 4)
    {
        printf("\n1)-.Insert an element\n2)-.Delete an element\n3)-.Display\n4)-.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert(queue,&front,&rear);
            break;
            case 2:
            delete(queue,&front,&rear);
            break;
            case 3:
            display(queue,&front,&rear);
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nEnter valid choice??\n");
        }
    }
return 0;
}
void insert(int queue[],int *f,int *r)
{
    int item;
    printf("\nEnter the element\n");
    scanf("%d",&item);
    if((*r+1)%maxsize == *f)
    {
        printf("\nOVERFLOW");
        return;
    }
    else if(*f == -1 && *r == -1)
    {
        *f = 0;
        *r = 0;
    }
    else if(*r == maxsize -1 && *f != 0)
    {
        *r = 0;
    }
    else
    {
        *r = (*r+1)%maxsize;
    }
    queue[*r] = item;
    printf("\nValue inserted ");
}
void delete(int queue[],int *f,int *r)
{
    int item;
    if(*f == -1 && *r == -1)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else if(*f == *r)
    {
        *f = -1;
        *r = -1;
    }
    else if(*f == maxsize -1)
        {
            *f = 0;
        }
    else
        *f = *f + 1;
}

void display(int queue[],int *f,int *r)
{
   int i;
   if(*f == -1)
      printf("\nCircular Queue is Empty!!!\n");
   else
   {
    printf("Elements in the queue\n");
     for(i=*f; i<*r; i++){
     printf("%d ",queue[i]);
     printf("%d \n",queue[i]);

      }

   }
}
