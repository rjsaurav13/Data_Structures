#include <stdio.h>
#include <stdlib.h>

struct node *head=NULL;
struct node
        {
    	int data;
    	struct node *next;
        };

void ins(int data)
        {
    	struct node *temp = (struct node*)malloc(sizeof(struct node));
    	temp->data=data;
    	temp->next=head;
    	head=temp;
        }

void insertAt(int data,int position)
    {
    	struct node *ptr = (struct node*)malloc(sizeof(struct node));
    	ptr->data=data;
    	int i;
    	struct node *temp=head;
    	if(position==1)
        {
        	ptr->next=temp;
    		head=ptr;
    		return;
    	}

    	for(i=1;i<position-1;i++)
    	{
        	temp=temp->next;
    	}

    	ptr->next=temp->next;
    	temp->next=ptr;
}

void display()
{
    	struct node *temp=head;
    	printf("\nList: ");
    	while(temp!=NULL)
    	{
		    printf("\n%d ",temp->data);
            temp=temp->next;
	}
}

int main()
{

    int i, n, pos, data;
    printf("Enter the number of nodes: \n");
    scanf("%d",&n);
    printf("Enter the data for the nodes: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        ins(data);
    }
    printf("Enter the data you want to insert in between the nodes: \n");
    scanf("%d",&data);
    printf("Enter the position at which you want to insert the nodes: \n");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Enter a valid position: ");

    }
    else
    {
        insertAt(data,pos);

    }
    display();
    return 0;
}
