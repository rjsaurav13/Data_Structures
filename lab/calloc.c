#include <stdio.h>
#include <stdlib.h>
int main() {
   int num = 4, i, *p, s = 0;
   p = (int*) calloc(num, sizeof(int));
   if(p == NULL) {
      printf("\nError! memory not allocated.\n");
      exit(0);
   }
   printf("Enter elements of array : ");
   for(i = 0; i < num; ++i) {
      scanf("%d", p + i);
      s += *(p + i);
   }
   printf("\nSum : %d", s);
   return 0;
}
