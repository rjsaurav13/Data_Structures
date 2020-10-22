#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[100];
int top = -1;

void push(char ch)
s[++top]=ch;
}
char pop()
{
  return s[top--];
}
int main(){
	char str[100], c;
	int i;
	printf("enter the string: ");
	scanf("%s",str);
	for(i=0;str[i];i++)
		push(str[i]);
	i=0;
	while(top!=-1)
	{
		c=pop();
		if(c!=str[i])
		{
			printf("string is not palindrome");
			exit(0);
		}
		i++;
		if(top==-1)
			printf("string is palindrome");
		
	}	
	return 0;
}