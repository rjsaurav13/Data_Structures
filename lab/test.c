#include <stdio.h>
int main()
{
//int x=10;
void *gp;
char ch = 'a';
//gp = &x;
//printf("\n Generic pointer points to the integer value = %d", *(int*)gp);
gp = &ch;
printf("\n Generic pointer now points to the character= %c", *(char*)gp);
return 0;
}