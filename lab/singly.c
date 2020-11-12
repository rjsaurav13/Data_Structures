//Insert front, Insert position, Delete based on key, Display, Reverse lis
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *insfront(struct node *);
struct node *inspos(struct node *);
struct node *delkey(struct node *);
struct node *display(struct node *);
struct node *revdisplay(struct node *);
int main(){
int ch;
for(;;){
    printf("Enter your choice :\n");
    printf("1)-Front Insert, 2)-Position Insertion,3)-Delete By Key,4)-Display,5)-Reverse Display:\n");
    scanf("%d",ch);
    switch(ch){
        case 1:
            start=insfront(start);
            break;
        case 2:
            start=inspos(start);
            break;
        case 3:
            start=delkey(start);
            break;
        case 4:
            start=display(start);
            break;
        case 5:
            start=revdisplay(start);
            break;
        case 6:
            exit(0);

    }
}
return 0;
}

struct node *insfront(struct node *start){
struct node *new_node;
int num;
printf("\n Enter the number to insert ");
scanf("%d",&num);
new_node= (struct node *)malloc(sizeof(struct node));
new_node ->data=num;
new_node ->next=start;
start=new_node;
return start;
};

struct node *display(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
 printf("\t %d", ptr -> data);
 ptr = ptr -> next;
}
return start;
}

struct node *revdisplay(struct node *start) {
   if(start == NULL) {
      printf("[null] => ");
      return start;
   }

   revdisplay(start->next);
   printf(" %d =>",start->data);

}
