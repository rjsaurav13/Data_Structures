#include<stdio.h>

void main()

{    int len,sum=0;    printf("Please enter the length of array:");    scanf("%d",len);
    int  var[len];
    int i, *ptr[len];
    for ( i = 0; i < len; i++) {      ptr[i] = &var[i];   }
   for ( i = 0; i < len; i++) {
      scanf("%d",ptr[i]);
   }

   for ( i = 0; i < len; i++) {
      printf("Value of var[%d] = %d\n", i,*ptr[i] );
   }
}
