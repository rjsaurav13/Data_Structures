#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30
int top=-1;
char s[30];
void push(char item)
{
top++;
s[top]=item;
}
char pop()
{
char c;
c=s[top];
top--;
return c;
}
int main()
{
int i,length,count=0;
char string[30];
printf("Enter the String:\n");
gets(string);
length=strlen(string);
for(i=0;i<length;i++)
push(string[i]);
for(i=0;i<length;i++)
{
if(string[i]==pop())
count++;
}
printf("%d\n",pop());
if (count==length)
printf("Given String is a Palindrome\n");
else
printf("Given String is not a Palindrome\n");
return 0;
}
