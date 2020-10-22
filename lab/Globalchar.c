
#include<stdio.h>
#include<string.h>

#define size 100

char ar[size];
int top=-1;

void push( char ch)
{
    if(top==size-1)
        printf("OVERFLOW");
    else
        ar[++top]=ch;


}

void pop()
{
    if(top==-1)
        printf("UNDERFLOW");
    else
        printf("%c removed successfully",ar[top]);
        top--;
}

void display()
{
    int x;
    for(x=top;x>=0;x--)
       printf("%c",ar[x]);

}

int main()
{
    int val,x;
    char ch;
   
    while(1){
        printf("\nEnter your choice:");
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.traverse");
        printf("\n4.exit\n");
        scanf("%d",&val);
        if(val==4)
            break;
        else
        {
            switch(val)
            {
            case 1:
                printf("\nEnter the item:");
                   scanf("%s",&ch);
                push(ch);
                break;
            case 2:pop();
                break;
            case 3:traverse();
                break;

            }

        }
    }

return 0;
}