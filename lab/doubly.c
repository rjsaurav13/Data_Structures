#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;

void main ()
{
int choice =0;
    while(choice != 5)
    {

        printf("Enter your choice\n");
        printf("1)-Insert 2)-Delete 3)-Display 4)-Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Please enter a valid option\n");


        }
    }
}
void insertion()
{
   struct node *ptr;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
    printf("Enter Item value: ");
    scanf("%d",&item);

   if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else
   {
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
   }
   printf("Node inserted %d\n\n",item);
}

}
void deletion()
{
    int tmp;
    struct node *ptr;
    if(head == NULL)
    {
        printf("UNDERFLOW\n");
    }
    else if(head->next == NULL)
    {

        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
    }

}
void display()
{
    struct node *ptr;

    ptr = head;
    if(head==NULL){
        printf("List is empty");
    }
    else{
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    }
    printf("\n");
}
