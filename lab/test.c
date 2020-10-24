#include <stdio.h>
int MAX = 3;
int main ()
{
int *ptr, num= 5;
ptr = &num;
printf("%d",++*ptr +6);
 
return 0;
}
