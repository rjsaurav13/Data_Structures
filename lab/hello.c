#include<stdio.h>

void main()

{
    int  var[len];
    int i, *ptr[len];

   for ( i = 0; i < len; i++) {
      scanf("%d",ptr[i]);
   }

   for ( i = 0; i < len; i++) {
      printf("Value of var[%d] = %d\n", i,*ptr[i] );
   }
}