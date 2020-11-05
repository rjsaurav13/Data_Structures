#include <stdio.h>
#include <malloc.h>
#define ISEMPTY printf("\nEMPTY LIST:");

struct node
{
    int value;
    struct node *next;
};

struct snode* create_node(int);
void insert_node_first();
void insert_node_pos();
void delete_pos();
void display();

typedef struct node snode;
snode *newn, *ptr, *prev, *temp;
snode *first = NULL, *last = NULL;

 int main()
 {
    int ch;
    char ans = 'Y';

    while (ans == 'Y'||ans == 'y')
    {
        printf("\n1.Insert node at first");
        printf("\n2.Insert node at position");
        printf("\n3.Delete Node from any Position");
        printf("\n4.Display List from Beginning to end");
        printf("\n5.Exit\n");
        printf("\nEnter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n...Inserting node at first...\n");
            insert_node_first();
            break;
        case 2:
            printf("\n...Inserting node at position...\n");
            insert_node_pos();
            break;
        case 3:
            printf("\n...Deleting Node from any Position...\n");
            delete_pos();
            break;
        case 4:
            printf("\n...Displaying List From Beginning to End...\n");
            display();
            break;
        case 5:
            printf("\n...Exiting...\n");
            return 0;
            break;
        default:
            printf("\n...Invalid Choice...\n");
            break;
        }
        printf("\nYOU WANT TO CONTINUE (Y/N)");
        scanf(" %c", &ans);
    }
    return 0;
 }


struct snode* create_node(int val)
{
    newn = (snode *)malloc(sizeof(snode));
    if (newn == NULL)
    {
        printf("\nMemory was not allocated");
        return 0;
    }
    else
    {
        newn->value = val;
        newn->next = NULL;
        return *newn;
    }
}

void insert_node_first()
{
    int val;

    printf("\nEnter the value for the node:");
    scanf("%d", &val);
    newn= create_node(val);
    if (first == last && first == NULL)
    {
        first = last = newn;
        first->next = NULL;
        last->next = NULL;
    }
    else
    {
        temp = first;
        first = newn;
        first->next = temp;
    }
    printf("\n----INSERTED----");
}


void insert_node_pos()
{
    int pos, val, cnt = 0, i;

    printf("\nEnter the value for the Node:");
    scanf("%d", &val);
    newn = create_node(val);
     printf("\nEnter the position ");
    scanf("%d", &pos);
    ptr = first;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cnt++;
    }
    if (pos == 1)
    {
        if (first == last && first == NULL)
        {
            first = last = newn;
            first->next = NULL;
            last->next = NULL;
        }
        else
        {
            temp = first;
            first = newn;
            first->next = temp;
        }
        printf("\nInserted");
    }
    else if (pos>1 && pos<=cnt)
    {
        ptr = first;
        for (i = 1;i < pos;i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = newn;
        newn->next = ptr;
        printf("\n----INSERTED----");
    }
    else
    {
        printf("Position is out of range");
    }
}



void delete_pos()
{
    int pos, cnt = 0, i;

    if (first == NULL)
    {
        ISEMPTY;
        printf(":No node to delete\n");
    }
    else
    {
        printf("\nEnter the position of value to be deleted:");
        scanf(" %d", &pos);
        ptr = first;
        if (pos == 1)
        {
            first = ptr->next;
            printf("\nElement deleted");
        }
        else
        {
            while (ptr != NULL)
            {
                ptr = ptr->next;
                cnt = cnt + 1;
            }
            if (pos > 0 && pos <= cnt)
            {
                ptr = first;
                for (i = 1;i < pos;i++)
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
                prev->next = ptr->next;
            }
            else
            {
                printf("Position is out of range");
            }
        free(ptr);
        printf("\nElement deleted");
        }
    }
}




void display()
{
    if (first == NULL)
    {
        ISEMPTY;
        printf(":No nodes in the list to display\n");
    }
    else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {
            printf("%d\t", ptr->value);
        }
    }
}



