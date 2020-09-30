#include<stdio.h>
int main(){
	int *ptr,**pptr,var=3000;
	ptr= &var;
	pptr=&ptr;
	printf("value of var:%d\n",var);
	printf("value at *ptr:%d\n",*ptr);
	printf("value at **pptr:%d\n",**pptr);
	return 0;
}