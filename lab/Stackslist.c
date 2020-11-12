#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *link;
};
typedef struct node * NODE;
NODE getnode()
{
 NODE X;
 X=(NODE)malloc(sizeof(struct node));
 return(X);
}
void freenode(NODE X)
{
 free(X);
}
NODE insert_front(NODE first,int item)
{
 NODE temp;
 temp=getnode();
 temp->info=item;
 temp->link=first;
 return(temp);
}
NODE delete_front(NODE first)
{
 NODE temp;
 if(first==NULL)
 {
 printf("List is empty\n");
 return first;
 }
temp=first;
 temp=temp->link;
 printf("Deleted data is %d\n",first->info);
 freenode(first);
 return(temp);
}
void display(NODE first)
{
 NODE temp;
 if(first==NULL)
 {
 printf("List is empty\n");
 return;
 }
 printf("Contents of the Linked list are\n");
 temp=first;
 while(temp!=NULL)
 {
 printf("%d ",temp->info);
 temp=temp->link;
 }
 printf("\n");
}
int main()
{
 int choice,item;
 NODE first=NULL;
 for(;;)
 {
 printf("Enter your choice\n1 Push\n2 Pop\n3 Display\n4 Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("Enter the item\n");
 scanf("%d",&item);
 first=insert_front(first,item);
 break;
 case 2:first=delete_front(first);
 break;
 case 3:display(first);
 break;
 case 4:exit(0);
 }
 }
}
