#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *llink;
 struct node *rlink;
};
typedef struct node * NODE;

NODE create_node(int val)
{
NODE newnode;
newnode=(NODE)malloc(sizeof(struct node));
newnode->data=val;
newnode->llink=NULL;
newnode->rlink=NULL;
return newnode;
}
void setleft(NODE p,int val)
{
if(p==NULL)
printf("insertion is not possible");
else if(p->llink!=NULL)
printf("invalid insertion");
else
p->llink=create_node(val);
}
void setright(NODE p, int val)
{
if(p==NULL)
printf("insertion is not possible");
else if(p->rlink!=NULL)
printf("invalid insertion");
else
p->rlink=create_node(val);
}

NODE create_bst(NODE root,int val)
{
	if(root==NULL)
	{
		root=create_node(val);
	}
	else
	{
		NODE p,q;
		p=q=root;
		while(val!=p->data&&q!=NULL)
		{
			p=q;
			if(val<p->data)
			q=p->llink;
			else
			q=p->rlink;
		}
		if(val==p->data)
		{
			printf("dublication is not allowed\n");
		}
		else if(val<p->data)
		setleft(p,val);
		else
		setright(p, val);
		}
	return root;
}
void inorder(NODE root)
{
if(root!=NULL)
{
inorder(root->llink);
printf(" %d ",root->data);
inorder(root->rlink);
}
}

void preorder(NODE root)
{
if(root!=NULL)
{
printf(" %d ",root->data);
preorder(root->llink);
preorder(root->rlink);
}
}

void postorder(NODE root)
{
if(root!=NULL)
{
postorder(root->llink);
postorder(root->rlink);
printf(" %d ",root->data);
}
}


int main()
{
 int choice, val,key,max;
 NODE root=NULL;

 while(1)
 {printf("\nEnter 1 Insert 2 In-order 3 Preorder 4 Postorder 5.Exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("Enter the element\n");
 scanf("%d",&val);
 root=create_bst(root,val);
 break;
 case 2:inorder(root);
 printf("\n");
 break;
 case 3:preorder(root);
 break;
 case 4:postorder(root);
 break;
 case 5:exit(0);
 break;
 default:printf("Invalid choice\n");
 }
 }
 return 0;
}
