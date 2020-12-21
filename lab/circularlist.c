#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *llink;
 struct node *rlink;
};
typedef struct node * NODE;
NODE getnode()
{
 NODE temp;
 temp=(NODE)malloc(sizeof(struct node));
 return temp;
 }
 NODE insrt_front(NODE first,int data)
 {
 NODE temp;
 temp=getnode();
 if(first==NULL)
 {
 first=temp;
 first->info=data;
 first->rlink=first;
 first->llink=first;
 return first;
}
else
{
 NODE last=first->llink;
 temp->info=data;
 temp->rlink=first;
 temp->llink=last;
 last->rlink=temp;
 first->llink=temp;
 return temp;
 }
}
 void display(NODE first)
 {
 NODE cur;
 if(first==NULL)
 {
 printf("Empty list\n");
 return;
 }
 cur=first;
 while(cur->rlink!=first)
{
 printf("%d\n",cur->info);
 cur=cur->rlink;
}
printf("%d\n",cur->info);
}


 NODE delrear(NODE first)
 {
 NODE cur;
int del;
 if(first==NULL)
 {
 printf("Empty list\n");
 return NULL;
 }
 if(first->rlink==first)
{
 del=first->info;
free(first);
first=NULL;
}
else
{
NODE prev=NULL;
cur=first->llink;
prev=cur->llink;
prev->rlink=first;
first->llink=prev;
del=cur->info;
free(cur);
}
printf("Deleted data is %d \n ",del);
return first;
}

 void main()
 {
 NODE first=NULL;
 int item,ch,key,pos;
 for(;;)
 {
 printf("\n1.Insert front 2.Delete read 3.Display 4.Exit\n");
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("Enter the element to be inserted\n");
 scanf("%d",&item);
 first=insrt_front(first,item);
 break;
 case 2:first=delrear(first);
 break;
 case 3:display(first);
 break;
 case 4:exit(0);
 }
 }
 }
