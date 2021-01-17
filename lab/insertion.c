#include <stdio.h>

int main()
{
   int array[100],pos, i, len, value;
   printf("Enter number of elements in array");
   scanf("%d", &len);
   printf("Enter the elements");
   for (i = 0; i < len; i++){
      scanf("%d", &array[i]);
      }
   printf("Enter the position to enter:");
   scanf("%d", &pos);
   printf("Enter the value");
   scanf("%d", &value);
   for (i = len - 1; i >=pos - 1; i--){
      array[i+1] = array[i];
      array[pos-1] = value;
 printf("final array :");
 }
 for(i = 0; i <= len; i++){
      printf("%d\n", array[i]);
 }
   return 0;
}
