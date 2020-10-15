#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100

char stack[SIZE];
int top = -1;
void push(char c);
char pop();
int isoperator(char symbol);
int precedence(char symbol);
void InfixToPrefix(char infix_exp[], char prefix_exp[]);


void main()
{

char infix[SIZE], prefix[SIZE];
printf("\n\n Enter Infix expression : ");
gets(infix);

InfixToPrefix(infix,prefix);
printf("\n Prefix Expression: ");

puts(prefix);
}

void InfixToPrefix(char infix_exp[], char prefix_exp[])
{
int i, j, k, pos, len;
char item, x, rev[SIZE];

pos=0;
len=strlen(infix_exp);
for(k=len-1;k>=0;k--)
{
rev[pos]=infix_exp[k];
pos++;
}
rev[pos]='\0';
strcpy(infix_exp,rev);

for(i=0; infix_exp[i]!='\0'; i++)
{
if(infix_exp[i] == ')')
infix_exp[i] = '(';
else if(infix_exp[i] == '(')
infix_exp[i] = ')';
}

push('(');

strcat(infix_exp,")");
i=0;
j=0;

item=infix_exp[i];

while(item != '\0')
{
if(item == '(')
{
push(item);
}
else if( isdigit(item) || isalpha(item))
{

prefix_exp[j] = item;
j++;
}
else if(isoperator(item) == 1)
{

x=pop();
while(isoperator(x) == 1 && precedence(x)>= precedence(item))
{
prefix_exp[j] = x;
j++;
x = pop();
}

push(x);

push(item);
}

else if(item == ')')
{
x = pop();
while(x != '(')
{
prefix_exp[j] = x;
j++;
x = pop();
}
}
else
{

printf("\nInvalid infix Expression.\n");
break;
}
i++;

item = infix_exp[i];
} 
if(top > 0)
printf("\n Invalid infix Expression.");
prefix_exp[j] = '\0';

pos=0;
len=strlen(prefix_exp);
for(k=len-1;k>=0;k--)
{
rev[pos]=prefix_exp[k];
pos++;
}
rev[pos]='\0';
strcpy(prefix_exp,rev);
}


void push(char c)
{
if(top >= SIZE-1)
printf("\n Stack Overflow.");
else
{
top++;
stack[top] = c;
}
}


char pop()
{
char c;
c='\0';
if(top < 0)
printf("\n Stack Underflow.");
else
{
c = stack[top];
top--;
}
return c;
}

int isoperator(char symbol)
{
if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-')
return 1;
else
return 0;
}


int precedence(char symbol)
{
if(symbol == '^')
return(5);
else if(symbol == '/')
return(4);
else if(symbol == '*')
return(3);
else if(symbol == '+')
return(2);
else if(symbol == '-')
return(1);
else
return(0);
}