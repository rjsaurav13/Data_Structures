#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int *ptr,*ptr1,i;
ptr=arr;
ptr1=arr+2;
printf("%d",*ptr1);
printf("\nArray is: ");
for(i=0;i<5;i++)
printf(" %d", *(arr+i));
return 0;

}